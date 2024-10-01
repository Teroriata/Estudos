# Glossário 

- [Algoritmo](#algoritmo)
- [História de Usuário](#história-de-usuário)
- [Requisito de Software](#requisito-de-software)
- [Atributo](#atributo)
- [linguagem Imperativa](#linguagem-imperativa)

## **Algoritmo**

Um **algoritmo** é uma sequência finita e bem definida de instruções ou passos que resolvem um problema ou realizam uma tarefa. Ele pode ser considerado como uma "receita" que descreve o conjunto de operações a serem realizadas, passo a passo, para alcançar um resultado desejado.

### Principais Características de um Algoritmo

1. **Finitude**: Deve ter um número finito de passos e terminar em algum momento.
2. **Precisão**: Cada passo do algoritmo deve ser bem definido e sem ambiguidades.
3. **Entrada**: Pode ter zero ou mais valores de entrada que guiarão sua execução.
4. **Saída**: Deve produzir pelo menos uma saída, que é o resultado do processamento.
5. **Efetividade**: Cada passo do algoritmo deve ser executável em tempo finito com os recursos disponíveis.

### Exemplos de Algoritmos

- **Busca Binária**: Um algoritmo para encontrar um valor em uma lista ordenada.
- **Algoritmo de Euclides**: Um método para calcular o maior divisor comum (MDC) entre dois números.

### Representação de Algoritmos

Algoritmos podem ser escritos em diferentes formatos, como:

- **Pseudocódigo**
- **Linguagens de Programação**
- **Diagramas**

Dependendo do nível de abstração e do contexto de aplicação.

## **História de Usuário**

Uma História de Usuário (HU) é uma breve descrição de uma funcionalidade ou requisito do sistema, focada no valor entregue ao usuário. Ela geralmente segue o formato: "Como [tipo de usuário], quero [objetivo], para que [benefício]". As HUs são utilizadas para facilitar a comunicação entre desenvolvedores e usuários, mantendo foco no resultado desejado.

**Fornecido pelo Professor Gilmar.**
### **ID:**  
HU-002

### **Título:**  
Login com autenticação de dois fatores (2FA)

### **Descrição:**  
Como **usuário cadastrado**, eu quero **poder realizar login com autenticação de dois fatores (2FA)** para que **minha conta esteja mais protegida contra acessos não autorizados**.

### **Critérios de Aceitação:**

#### Cenário 1: Login com sucesso usando 2FA
- **Dado** que o usuário está na página de login e tem a autenticação de dois fatores ativada,
- **Quando** o usuário insere corretamente seu e-mail e senha,
- **E** é direcionado para a página de verificação de código de autenticação,
- **E** insere o código de autenticação enviado para seu dispositivo,
- **Então** o usuário deve ser autenticado com sucesso e direcionado para a página inicial.

#### Cenário 2: Falha no login por código 2FA inválido
- **Dado** que o usuário está na página de verificação de código de autenticação,
- **Quando** insere um código de autenticação incorreto,
- **Então** uma mensagem de erro deve ser exibida, informando que o código está incorreto,
- **E** o usuário deve poder tentar inserir o código novamente.

#### Cenário 3: Falha no login por expiração do código 2FA
- **Dado** que o usuário está na página de verificação de código de autenticação,
- **Quando** o código de autenticação expira (após 5 minutos),
- **Então** uma mensagem de erro deve ser exibida informando que o código expirou,
- **E** o usuário deve ter a opção de solicitar o envio de um novo código.

### **Prioridade:**  
Alta

### **Estimativa de Esforço:**  
8 Story Points

### **Dependências:**  
- Integração com o sistema de geração e envio de códigos de autenticação (História HU-006).
- Desenvolvimento da interface de verificação de código (História HU-007).

### **Notas/Comentários Adicionais:**
- O código de autenticação deve ser enviado via SMS ou aplicativo autenticador.
- Consultar a equipe de segurança sobre a validade e segurança do código de verificação.

## **Requisito de Software**

Um **requisito de software** é uma descrição de uma funcionalidade ou propriedade que o sistema ou software deve possuir para atender às necessidades do cliente, usuário ou do próprio sistema. Os requisitos podem ser divididos em dois tipos principais:

- **Requisitos funcionais**: Descrevem as funções ou comportamentos específicos que o sistema deve executar. Por exemplo, "O sistema deve permitir que o usuário faça login usando um nome de usuário e senha."
- **Requisitos não funcionais**: Referem-se às restrições de qualidade ou atributos do sistema, como desempenho, segurança, escalabilidade e usabilidade. Exemplo: "O sistema deve ser capaz de suportar até 10.000 usuários simultâneos."

Os requisitos servem como uma base para o desenvolvimento, testes e validação de um sistema. Eles garantem que o software final atenda às expectativas e necessidades do cliente.

### Diferença entre **Requisito** e **Atributo**

Embora os termos **requisito** e **atributo** possam parecer semelhantes, eles têm funções distintas no desenvolvimento de software:

1. **Requisito de Software**:
   - **Propósito**: Define o que o sistema deve fazer ou como deve funcionar, seja uma funcionalidade ou uma característica desejada.
   - **Exemplo**: "O sistema deve permitir a criação de contas de usuário."
   - **Tipos**: Funcionais (relacionados a funcionalidades) e não funcionais (relacionados à qualidade do sistema).
   
2. **Atributo de Software**:
   - **Propósito**: É uma característica específica ou propriedade do software, que descreve qualidades internas ou externas do sistema. Está frequentemente associado a requisitos não funcionais, mas não é exatamente o mesmo que um requisito.
   - **Exemplo**: "Desempenho", "Segurança" ou "Escalabilidade" são atributos que o software pode possuir, mas o requisito seria algo mais específico, como "O sistema deve processar transações em menos de 2 segundos."
   - **Tipos**: Atributos podem ser vistos como qualidades mensuráveis que ajudam a garantir o cumprimento de requisitos.

### Resumindo:

- **Requisitos** são descrições específicas das funcionalidades ou características que o software deve ter.
- **Atributos** são propriedades gerais de qualidade que o software pode ter, muitas vezes usados para detalhar **requisitos não funcionais**.

Ou seja, **atributos** descrevem a qualidade do software, enquanto **requisitos** especificam comportamentos ou restrições que o software deve cumprir.

## **Atributo:**   

Em **engenharia de software**, um **atributo** é uma característica ou propriedade que define aspectos específicos de um componente, sistema ou módulo de software. Atributos são usados para descrever tanto as **propriedades internas** quanto as **propriedades externas** de um sistema.

Alguns tipos de atributos em engenharia de software:

- **Atributos funcionais**: Referem-se às funcionalidades que o sistema deve prover, como requisitos funcionais, operações ou interações com o usuário.
- **Atributos não funcionais**: Dizem respeito às qualidades do sistema, como desempenho, segurança, confiabilidade, escalabilidade e usabilidade.

Esses atributos são usados para definir os **requisitos** do sistema e orientar o processo de **desenvolvimento**, garantindo que o software atenda tanto às necessidades do cliente quanto às especificações técnicas.

Atributos são frequentemente documentados durante o levantamento de requisitos e ajudam a orientar a arquitetura e o design do software.

## **linguagem Imperativa:**  

Uma **linguagem imperativa** é um tipo de linguagem de programação onde o foco principal é **como o computador deve realizar tarefas**. Nela, os programadores escrevem **instruções explícitas**, que descrevem passo a passo as operações que o computador deve executar para alcançar um resultado.

Algumas características das linguagens imperativas:

- **Sequência de instruções**: O código é executado na ordem em que as instruções aparecem.
- **Alteração de estado**: As variáveis e estruturas de dados são modificadas ao longo da execução do programa.
- **Uso de loops e condições**: Estruturas como loops (`for`, `while`) e condições (`if`, `else`) são amplamente utilizadas para controlar o fluxo de execução.

Exemplos de linguagens imperativas incluem **C**, **Java**, **Python** (quando usado de forma procedural), **Pascal**, e **Assembly**. Essas linguagens contrastam com as linguagens **declarativas**, onde o foco é descrever **o que** o programa deve fazer, e não **como** fazê-lo, como ocorre em linguagens funcionais ou lógicas.

## Artefato

Um artefato em Engenharia de Software é qualquer produto tangível gerado ao longo do ciclo de desenvolvimento de software. Isso inclui documentos, modelos, códigos-fonte, manuais, diagramas e até protótipos. Artefatos são usados para planejar, implementar, testar e manter o software, sendo essenciais para o controle e documentação do processo de desenvolvimento.

## Banco de dados.

      ## SGBD

      ## Entidades.

      ## Atributos? 

      ## Domínios.

      ## Tupla.

      ## Chave primaria.

      ## chave estrangeria



Leiura sobre requisitos e atributos.
https://visuresolutions.com/pt/blog/high-quality-requirements-attributes/