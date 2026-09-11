const int TRIG_PIN = 4;
const int ECHO_PIN = 2;
const int BOTAO_FALHA = 12;
const int BOTAO_SALTO = 14;

const int LED_VERDE = 25;
const int LED_AMARELO = 26;
const int LED_VERMELHO = 27;
const int BUZZER = 19;

unsigned long sequenciaEvento = 0;

// Controle da falha
bool falhaAtiva = false;
unsigned long inicioFalha = 0;

const unsigned long TEMPO_ALERTA_FALHA = 3000; // 3 segundos
const unsigned long TEMPO_PAUSA_FALHA = 8000;  // 8 segundos

// Temporizador da sessão
unsigned long tempoEstudo = 0;
unsigned long ultimaAtualizacao = 0;

// 20 segundos representam os 50 minutos reais
const unsigned long TEMPO_PAUSA_ESTUDO = 20000;

bool pausaRecomendada = false;
bool botaoSaltoAnterior = HIGH;


// ======================================================
// LEDs
// ======================================================

void apagarLeds() {
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARELO, LOW);
  digitalWrite(LED_VERMELHO, LOW);
}

void estadoPresente() {
  apagarLeds();
  digitalWrite(LED_VERDE, HIGH);
}

void estadoFalhaTemporaria() {
  apagarLeds();
  digitalWrite(LED_AMARELO, HIGH);
}

void estadoPausadoPorFalha() {
  apagarLeds();
  digitalWrite(LED_VERMELHO, HIGH);
}

void simularSaltoSequencia(float distancia) {
  unsigned long sequenciaEsperada = sequenciaEvento + 1;

  // Simula a perda de dois eventos
  sequenciaEvento += 3;

  Serial.println("================================");
  Serial.println("ALERTA: SALTO NA SEQUENCIA!");
  
  Serial.print("Sequencia esperada: ");
  Serial.println(sequenciaEsperada);

  Serial.print("Sequencia recebida: ");
  Serial.println(sequenciaEvento);
  Serial.println("================================");

  // Evento JSON anomalo
  Serial.println("{");
  Serial.println("  \"eventType\": \"sensor.distance\",");
  Serial.println("  \"deviceId\": \"esp32-mesa-01\",");
  Serial.println("  \"entityId\": \"estudante-mesa\",");

  Serial.print("  \"eventTimeMs\": ");
  Serial.print(millis());
  Serial.println(",");

  Serial.print("  \"sequence\": ");
  Serial.print(sequenciaEvento);
  Serial.println(",");

  Serial.print("  \"value\": ");
  Serial.print(distancia, 1);
  Serial.println(",");

  Serial.println("  \"unit\": \"cm\",");
  Serial.println("  \"state\": \"PRESENTE\",");
  Serial.println("  \"quality\": \"VALID\"");
  Serial.println("}");
}


// ======================================================
// Evento JSON
// ======================================================

void emitirEvento(float distancia, String estado, String qualidade) {
  sequenciaEvento++;

  Serial.println("{");
  Serial.println("  \"eventType\": \"sensor.distance\",");
  Serial.println("  \"deviceId\": \"esp32-mesa-01\",");
  Serial.println("  \"entityId\": \"estudante-mesa\",");

  Serial.print("  \"eventTimeMs\": ");
  Serial.print(millis());
  Serial.println(",");

  Serial.print("  \"sequence\": ");
  Serial.print(sequenciaEvento);
  Serial.println(",");

  Serial.print("  \"value\": ");
  Serial.print(distancia, 1);
  Serial.println(",");

  Serial.println("  \"unit\": \"cm\",");

  Serial.print("  \"state\": \"");
  Serial.print(estado);
  Serial.println("\",");

  Serial.print("  \"quality\": \"");
  Serial.print(qualidade);
  Serial.println("\"");

  Serial.println("}");
}


// ======================================================
// Buzzer
// ======================================================

void tocarAlertaPausa() {
  tone(BUZZER, 1000);
  delay(1500);
  noTone(BUZZER);
}


// ======================================================
// Setup
// ======================================================

void setup() {
  Serial.begin(115200);

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(BOTAO_FALHA, INPUT_PULLUP);
  pinMode(BOTAO_SALTO, INPUT_PULLUP);

  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERMELHO, OUTPUT);

  pinMode(BUZZER, OUTPUT);
  noTone(BUZZER);

  apagarLeds();
  ultimaAtualizacao = millis();

  Serial.println("Sistema iniciado");
}


// ======================================================
// Loop principal
// ======================================================

void loop() {
  unsigned long agora = millis();
  unsigned long intervalo = agora - ultimaAtualizacao;
  ultimaAtualizacao = agora;

  // ====================================================
  // Leitura do HC-SR04
  // ====================================================

  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  long duracao = pulseIn(ECHO_PIN, HIGH, 30000);

  float distancia = 0;
  bool leituraValida = true;

  if (duracao == 0) {
    leituraValida = false;
  } else {
    distancia = duracao * 0.0343 / 2.0;

    if (distancia < 5 || distancia > 300) {
      leituraValida = false;
    }
  }

  // ====================================================
  // Botão para simular falha
  // ====================================================

  bool botaoPressionado = digitalRead(BOTAO_FALHA) == LOW;
  bool botaoSaltoAtual = digitalRead(BOTAO_SALTO);
  bool saltoSolicitado = false;

  if (botaoSaltoAnterior == HIGH && botaoSaltoAtual == LOW) {
    saltoSolicitado = true;
  }

  botaoSaltoAnterior = botaoSaltoAtual;

  if (botaoPressionado) {
    leituraValida = false;
  }

  // ====================================================
  // LEITURA INVÁLIDA
  // ====================================================

  if (!leituraValida) {
    if (!falhaAtiva) {
      falhaAtiva = true;
      inicioFalha = millis();
      Serial.println("Estado: FALHA_TEMPORARIA");
    }

    unsigned long tempoFalha = millis() - inicioFalha;

    Serial.print("Falha ha: ");
    Serial.print(tempoFalha / 1000);
    Serial.println(" segundos");

    Serial.print("Tempo de estudo preservado: ");
    Serial.print(tempoEstudo / 1000);
    Serial.println(" segundos");

    // Falha persistente
    if (tempoFalha >= TEMPO_PAUSA_FALHA) {
      estadoPausadoPorFalha();
      Serial.println("Estado: PAUSADO_POR_FALHA");
      emitirEvento(0, "PAUSADO_POR_FALHA", "INVALID");
    }

    // Falha temporária
    else {
      estadoFalhaTemporaria();

      if (tempoFalha >= TEMPO_ALERTA_FALHA) {
        Serial.println("ALERTA: problema de leitura do sensor");
      }

      emitirEvento(0, "FALHA_TEMPORARIA", "INVALID");
    }
  }

  // ====================================================
  // LEITURA VÁLIDA
  // ====================================================

  else {
    if (falhaAtiva) {
      Serial.println("Sensor recuperado!");
      falhaAtiva = false;
    }

    Serial.print("Distancia: ");
    Serial.print(distancia, 1);
    Serial.print(" cm | ");

    // ==================================================
    // ESTUDANTE PRESENTE
    // ==================================================

    if (distancia < 80) {
      estadoPresente();

      // Sessão ainda está contando
      if (!pausaRecomendada) {
        tempoEstudo += intervalo;

        Serial.println("Estado: PRESENTE");
        Serial.print("Tempo de estudo: ");
        Serial.print(tempoEstudo / 1000);
        Serial.println(" segundos");

        // 20 segundos simulados atingidos
        if (tempoEstudo >= TEMPO_PAUSA_ESTUDO) {
          tempoEstudo = TEMPO_PAUSA_ESTUDO;
          pausaRecomendada = true;

          Serial.println("==============================");
          Serial.println("Estado: PAUSA_RECOMENDADA");
          Serial.println("Hora da pausa para o lanche!");
          Serial.println("20 segundos simulados atingidos.");
          Serial.println("Temporizador pausado.");
          Serial.println("==============================");

          tocarAlertaPausa();
        }
      }

      // Pausa já foi recomendada
      else {
        Serial.println("Estado: PAUSA_RECOMENDADA");
        Serial.print("Tempo de estudo pausado em: ");
        Serial.print(tempoEstudo / 1000);
        Serial.println(" segundos");
      }

      // Evento JSON
      if (pausaRecomendada) {
        emitirEvento(distancia, "PAUSA_RECOMENDADA", "VALID");
      } 
      else if (saltoSolicitado) {
        simularSaltoSequencia(distancia);
      } 
      else {
        emitirEvento(distancia, "PRESENTE", "VALID");
      }
    }

    // ==================================================
    // ESTUDANTE AUSENTE
    // ==================================================

    else {
      apagarLeds();

      Serial.println("Estado: AUSENTE");
      Serial.print("Tempo de estudo preservado: ");
      Serial.print(tempoEstudo / 1000);
      Serial.println(" segundos");

      emitirEvento(distancia, "AUSENTE", "VALID");
    }
  }

  Serial.println("--------------------");
  delay(1000);
}