#### **2. Tipos de Relacionamento**  

Os relacionamentos podem ser classificados de acordo com a **cardinalidade**, que define quantas ocorrências de uma entidade podem se relacionar com outra. Os três principais tipos são:  

📌 **1. Relacionamento 1:1 (Um para Um)**  
   - Cada entidade A se relaciona com **apenas uma** entidade B e vice-versa.  
   - Exemplo: Cada **departamento** tem um **gerente** e cada gerente gerencia **apenas um** departamento.  
   - Representação:  
     ```
     Departamento (1) —— (1) Funcionário
     ```

📌 **2. Relacionamento 1:N (Um para Muitos)**  
   - Uma entidade A pode se relacionar com **múltiplas** entidades B, mas cada entidade B está associada a **uma única** entidade A.  
   - Exemplo: Um **departamento** pode ter **vários funcionários**, mas cada funcionário pertence a **apenas um** departamento.  
   - Representação:  
     ```
     Departamento (1) —— (N) Funcionário
     ```

📌 **3. Relacionamento N:M (Muitos para Muitos)**  
   - Uma entidade A pode se relacionar com **múltiplas** entidades B e vice-versa.  
   - Exemplo: Um **funcionário** pode trabalhar em **vários projetos**, e um **projeto** pode ter **vários funcionários**.  
   - Como bancos relacionais não suportam diretamente esse tipo de relacionamento, geralmente ele é implementado com uma **tabela intermediária**.  
   - Representação:  
     ```
     Funcionário (N) —— (M) Projeto
     ```

#### **3. Relacionamentos com Atributos**  
Em alguns casos, um relacionamento pode ter atributos próprios. Isso ocorre quando informações precisam ser armazenadas sobre a associação entre entidades.  

🔹 **Exemplo**: O relacionamento **"Trabalha em"** entre **Funcionário** e **Projeto** pode ter um atributo **"Horas Semanais"**, que indica quantas horas o funcionário trabalha no projeto.  
   - Representação:  
     ```
     Funcionário (N) —— "Trabalha em" (com atributo: Horas) —— (M) Projeto
     ```

Quer que eu crie um diagrama MER para ilustrar isso melhor? 🚀

Em um Modelo Entidade-Relacionamento (MER), as entidades são representadas por retângulos e seus atributos por elipses.