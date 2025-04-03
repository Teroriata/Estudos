# 1 - introdução

Os Sistemas Operacionais (SOs) são as ferramentas de software mais básicas de qualquer sistema de computação. Ter tal entendimento,
permite uma melhor compreensão e utilização dos recursos disponibilizados pelos SOs, favorecendo a elaboração de soluções mais eficientes. 

Os sistemas operacionais realizam duas funções essencialmente não
relacionadas: fornecer a programadores de aplicativos (e programas
aplicativos, claro) um conjunto de recursos abstratos limpo em vez de
recursos confusos de hardware, e gerenciar esses recursos de hardware

O Sistema Operacional (SO) é o software que controla todos os recursos do
computador e fornece a base sobre a qual os programas aplicativos são
escritos e suas principais funcionalidades são: Máquina Virtual ou Estendida
e Gerente de Recursos.

## 1.1 Máquina Virtual

 **Máquina Virtual ou Estendida:** o SO isola o usuário dos detalhes de operação do
hardware, fornecendo-lhe uma interface simplificada de operação. Assim, é de
responsabilidade do SO tratar de questões como interrupções, temporizadores,
gerência de espaço em etc.

Deve observar que os clientes reais do sistema operacionaissão os programas aplicativos.
São eles que lidam diretamente com a abstrações fornecidas pela interface do usuáro, seja uma linha comandos (shell) ou uma interface gráfica.

de modo geral faz a parte (feira)hardware, ser mais agradavel de se lidar, usando uma interface gráfica. 
![image](https://github.com/user-attachments/assets/99b547dd-4bac-42fb-9553-14270c64376f)

## 1.2 Como um gerenciador de recursos.

 **Gerente de Recursos:** o SO é responsável pela gerência dos recursos de hardware
disponíveis na máquina como, por exemplo, discos, impressoras, unidades de fita etc.

- **muultiplexação** (compartilhamento) de recursos de duas maneiras diferentes, tempo e espaço.
  - **Tempo** Diferentes programas ou usuarios se revezam usando. primeiro um programa usa a CPU, tempos de algum tempo de execução ele migra o uso para outro programa.
  - **Espaço** Ao inves deles se revezarem cada um usa uma parte do todo da CPU, mantendo todos em execução. Pois ao inves de dar todo o processamento a um programa apenas, mesmo ele não necessitando, limita a usabilidade do SO, mas se usarmos o recurso de forma com que
    todos os programas sejam executados ao mesmo tempo é mais eficiente.    

![image](https://github.com/user-attachments/assets/205d6a25-8ced-4ac6-aac4-44bf48b8eb05)


# 1.3  revisão de hardware de computadores. 

Um sistema operacional está intimamente ligado ao hardware do computadorno qual ele é executado. Ele estende o conjunto de instruções do computador e gerencia seus recursos. Para funcionar, ele deve conhcer profundamente o hardware, peo menos como ele aparece para o programador. 

![image](https://github.com/user-attachments/assets/3de7c808-a00b-486d-b8b7-8fb2be6c5e39)

