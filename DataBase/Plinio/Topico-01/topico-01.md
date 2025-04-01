Diario de Bordo Sobre Banco de dados. 

[Univesp](https://www.youtube.com/playlist?list=PLxI8Can9yAHeHQr2McJ01e-ANyh3K0Lfq)

# banco de dados

Um banco de dados é uma coleção de dados. Nesse contexto, um dado é um fato que deve ser armaeznado(Persistido) e que tem um significado implícito. 

## # Tópico 2 - O que é Banco de Dados?
###### *by Prof. Plinio Sa Leitao-Junior (INF/UFG)*

Algumas definições da literatura:
- WIEDERHOLD - Um banco de dados é uma coleção de dados mutuamente relacionados.
- CHU - Um banco de dados é um conjunto de dados relacionados entre si.
- DATE - Um banco de dados é uma coleção de dados operacionais armazenados usados pelos sistemas de uma determinada aplicação.
- SILBERSCHATZ, KORTH, SUDARSHAN - Um banco de dados é uma coleção de dados que contém informação de um particular empreendimento.
- ELMASRI, NAVATHE - Um banco de dados é uma coleção de dados relacionados.
- ENGLES - Um banco de dados é uma coleção de dados operacionais usados pelo sistema de aplicações de uma empresa.

## Pode-se concluir:

Um banco de dados é um conjunto de **dados relacionados**, que **existe por um período** de tempo, geralmente muitos anos. 

Em outra perspectiva; o termo banco de dados se refere a uma **coleção de dados**, cuja reunião ocorre com **propósito definido**, e que são **gerenciados por software**. 

Sobre o **software** que gerencia o banco de dados, alguns de seus possíveis papéis são:
1. Permitir que os ***usuários***  criem novos bancos de dados e especifiquem seus ***esquemas*** , usando uma ***linguagem de definição de dados***.
2. Dar aos usuários a capacidade de ***consultar os dados***  e ***modificar os dados*** , usando uma linguagem apropriada, geralmente chamada de ***linguagem de consulta***  ou ***linguagem de manipulação de dados***.
3. Suportar o ***armazenamento de grande volume de dados*** - muitos terabytes ou mais - por um longo período de tempo, permitindo ***acesso eficiente***  aos dados para consultas e modificações no banco de dados.
4. Habilitar a ***durabilidade***  e a ***recuperação após falhas***  do banco de dados, devido a ***erros de vários tipos***  ou ***uso indevido intencional***.
5. Controlar o acesso aos dados de vários usuários ao mesmo tempo, sem permitir ***interferências inesperadas entre os usuários*** e sem que ***transações nos dados sejam realizadas parcialmente*** (em vez de ações completas).

## Exercícios

1. Com relação às definições sobre 'o que é banco de dados' (apresentadas no início deste tópico), analise as diferenças entre as definições, com especial atenção aos termos específicos de algumas delas, tais como 'operacionais' e 'usados'.<br>
Apresente a sua definição sobre '_o que banco de dados_', tal que englobe o conteúdo das seis definições apresentadas, mas não use os termos (palavras) já presentes nas seis definições.

    ### **RESPOSTA** <br>
     Banco de dados é um conjunto de dados relacionados, com objetivo de armazenar informações para um sistema de proposito especifico.

2. Sobre os possíveis papéis do **software** que gerencia o banco de dados, observe que há termos assinalados em negrito e itálico e seguidos de (??), tais como ***linguagem de consulta*** e ***durabilidade***. Pesquise sobre tais termos, e formule o seu entendimento sobre os mesmos. Não copie o texto da bibliografia, construa a sua interpretação.






- **Usuários:** São as pessoas ou sistemas que interagem com o banco de dados para inserir, modificar, consultar ou administrar os dados. Podem ser administradores, desenvolvedores, analistas de dados ou aplicativos automatizados.

- **Esquemas:** Representam a estrutura do banco de dados, incluindo tabelas, relações, restrições, índices e outras definições. O esquema define como os dados serão organizados e interligados.

- **Linguagem de definição de dados:** Conjunto de comandos utilizados para definir a estrutura do banco de dados, como criar, alterar ou excluir tabelas e restrições. No SQL, essa linguagem é conhecida como DDL (Data Definition Language), incluindo comandos como CREATE, ALTER e DROP.

- **Consultar os dados:** Ação de buscar e recuperar informações armazenadas no banco de dados. Geralmente, isso é feito por meio de consultas estruturadas utilizando SQL, permitindo filtrar, ordenar e agrupar dados conforme necessário.

- **Modificar os dados:** Processo de alteração das informações armazenadas no banco de dados, podendo incluir inserção (INSERT), atualização (UPDATE) ou remoção (DELETE) de registros.

- **Linguagem de consulta:** Linguagem utilizada para solicitar informações do banco de dados. A mais comum é a SQL, que permite realizar buscas específicas, aplicar filtros, agregar dados e combinar informações de diferentes tabelas.

- **Linguagem de manipulação de dados:** Conjunto de comandos que possibilitam a inserção, alteração, exclusão e recuperação de dados no banco. No SQL, isso corresponde à DML (Data Manipulation Language), que inclui comandos como SELECT, INSERT, UPDATE e DELETE.

- **Armazenamento de grande volume de dados:** Capacidade de um banco de dados de lidar com grandes quantidades de informações, podendo chegar a terabytes ou petabytes de dados. Isso exige soluções eficientes para garantir acesso rápido e seguro.

- **Acesso eficiente:** Refere-se à otimização do banco de dados para que as consultas e modificações sejam realizadas de forma rápida e eficaz, minimizando o tempo de resposta. Isso pode ser alcançado por meio de técnicas como indexação, cache e otimização de consultas.

- **Durabilidade:** Propriedade que garante que os dados confirmados em uma transação permanecerão armazenados permanentemente, mesmo em caso de falhas no sistema. Isso é essencial para manter a integridade dos dados.

- **Recuperação após falhas:** Capacidade do banco de dados de restaurar seu estado correto após um erro inesperado, como falhas de hardware, software ou energia. Isso pode ser feito com backups e logs de transação.

- **Erros de vários tipos:** Problemas que podem ocorrer no banco de dados, como falhas no hardware, bugs no software, erros humanos ou corrupção de dados. O banco de dados deve ter mecanismos para minimizar e corrigir esses erros.

- **Uso indevido intencional:** Situações em que um usuário mal-intencionado tenta manipular ou danificar o banco de dados, como ataques de injeção de SQL ou acessos não autorizados. Sistemas de segurança são necessários para evitar esses problemas.

- **Interferências inesperadas entre os usuários:** Problemas que podem ocorrer quando vários usuários acessam e modificam os mesmos dados simultaneamente, causando inconsistências. O banco de dados deve gerenciar concorrência para evitar conflitos.

- **Transações nos dados sejam realizadas parcialmente:** Uma transação é um conjunto de operações que devem ser concluídas de forma integral. Se uma transação for interrompida antes de ser totalmente executada, pode gerar inconsistências. O banco de dados deve garantir que transações sejam concluídas por completo ou revertidas totalmente (princípio da atomicidade).z