# Tópico 3 - Definições

| **#** | **Termo** | **Definição** |
|------|----------|-------------|
| 1 | **Banco de dados** | Coleção organizada de dados armazenados para facilitar o acesso, gerenciamento e atualização. |
| 2 | **Dado** | Qualquer fato, valor ou item de informação armazenado no banco de dados. |
| 3 | **Tipo de dado** | Especificação do formato dos dados, como `int`, `varchar`, `float`. |
| 4 | **Meta-dado** | Dados que descrevem a estrutura e as características do banco de dados, como tabelas, colunas e restrições. |
| 5 | **Tamanho e complexidade do banco de dados** | Relaciona-se à quantidade de dados armazenados e ao nível de interconexão entre eles. |
| 6 | **Banco de dados mantido manualmente ou informatizado** | Pode ser registrado fisicamente (papel) ou gerenciado por software. |
| 7 | **Sistema Gerenciador de Banco de Dados (SGBD)** | Software que controla a criação, manipulação e segurança dos dados. |
| 8 | **Definição, construção, manipulação de um banco de dados** | Processos de criação da estrutura, armazenamento e operação sobre os dados. |
| 9 | **Programa de aplicação** | Software que interage com o banco de dados para atender às necessidades do usuário. |
| 10 | **Consulta** | Comando usado para recuperar informações do banco de dados, geralmente via SQL (`SELECT`). |
| 11 | **Transação** | Conjunto de operações no banco de dados que devem ser executadas integralmente para garantir a consistência dos dados. |
| 12 | **Sistema de banco de dados** | Conjunto do SGBD, banco de dados e aplicativos que interagem com ele. |
| 13 | **Especificação de requisitos e análise conceitual** | Etapas iniciais do projeto de banco de dados, onde se identificam as necessidades dos usuários. |
| 14 | **Projeto conceitual** | Modelagem de alto nível que define entidades, atributos e relacionamentos sem detalhes técnicos. |
| 15 | **Projeto lógico** | Representação estruturada do banco de dados, traduzindo o modelo conceitual para um formato que pode ser implementado. |
| 16 | **Projeto físico** | Implementação final do banco de dados, incluindo armazenamento, índices e otimizações. |
| 17 | **Abordagem tradicional de arquivos X abordagem de banco de dados** | A abordagem de arquivos requer programação personalizada, enquanto a de banco de dados usa SGBDs para gerenciar os dados. |
| 18 | **Natureza auto-descritiva de um sistema de banco de dados** | O banco armazena sua própria estrutura (meta-dados), permitindo autoconfiguração. |
| 19 | **Isolamento entre programas e dados e abstração de dados** | Separação entre a lógica do programa e a estrutura dos dados para facilitar a manutenção. |
| 20 | **Suporte a múltiplas visões dos dados** | Diferentes usuários podem visualizar os dados de formas distintas, conforme suas permissões. |
| 21 | **Compartilhamento de dados e processamento de transações multiusuário** | Permite que vários usuários acessem e modifiquem os dados simultaneamente sem inconsistências. |
| 22 | **Administradores de banco de dados** | Profissionais responsáveis pela manutenção, segurança e otimização do banco de dados. |
| 23 | **Designers de banco de dados** | Criam e estruturam o banco de dados de acordo com os requisitos da aplicação. |
| 24 | **Usuários finais** | Pessoas que interagem com o banco de dados para recuperar ou modificar informações. |
| 25 | **Classificação de usuários finais** | *Casuais:* usam ocasionalmente; *Paramétricos:* operam rotinas predefinidas; *Sofisticados:* fazem consultas complexas; *Autônomos:* criam seus próprios bancos. |
| 26 | **Analistas de sistema e programadores de aplicativos** | Criam sistemas que interagem com bancos de dados. |
| 27 | **Redundância** | Repetição desnecessária de dados, levando ao desperdício de armazenamento e inconsistências. |
| 28 | **Redundância controlada** | Quando a repetição de dados é gerenciada para otimizar desempenho e confiabilidade. |
| 29 | **Restrição de acesso não autorizado** | Mecanismos de segurança para impedir acessos indevidos, como autenticação e permissões. |
| 30 | **Persistência de dados** | Dados permanecem armazenados mesmo após falhas do sistema. |
| 31 | **Processamento de consulta** | Etapas que o SGBD executa para interpretar e otimizar uma consulta SQL. |
| 32 | **Restaurar e recuperar** | Técnicas para restaurar um banco de dados após falhas ou desastres. |
| 33 | **Restrições de integridade** | Regras que garantem a validade dos dados, como unicidade de chaves primárias. |
| 34 | **Integridade referencial** | Garantia de que as relações entre tabelas sejam mantidas corretamente. |
| 35 | **Regras de negócio** | Conjunto de normas que definem como os dados devem ser manipulados e validados. |
| 36 | **Modelos de dados, esquemas e instâncias** | Modelos estruturam dados; esquemas definem a organização; instâncias são os valores armazenados. |
| 37 | **Esquema interno, esquema conceitual, esquemas externos** | Diferentes níveis de abstração na modelagem do banco de dados. |
| 38 | **Linguagens de banco de dados** | Conjunto de linguagens usadas para definir, manipular e consultar dados (SQL, DDL, DML). |
| 39 | **SQL** | Structured Query Language, linguagem padrão para manipulação de bancos relacionais. |
| 40 | **Abstração de dados** | Organização em camadas para esconder detalhes técnicos da implementação. |
| 41 | **Modelo entidade relacionamento** | Modelo gráfico que representa os dados e suas relações. |
| 42 | **Modelo relacional** | Organização dos dados em tabelas com relações entre elas. |
| 43 | **Independência de dados** | Capacidade de modificar a estrutura do banco sem afetar os aplicativos que o utilizam. |
| 44 | **Módulos que compõem um SGBD** | Componentes como gerenciador de armazenamento, processador de consultas e gerenciador de transações. |
