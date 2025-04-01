# Tabela Intermediária em Relacionamentos Muitos-para-Muitos

Em um **relacionamento muitos para muitos** em bancos de dados, uma **tabela intermediária** (também chamada de **tabela de junção** ou **tabela associativa**) é usada para representar a relação entre duas tabelas principais. Isso ocorre porque os bancos de dados relacionais **não suportam diretamente** esse tipo de relacionamento, então ele precisa ser **decomposto** em dois relacionamentos um-para-muitos.

## Como funciona uma tabela intermediária?

A tabela intermediária contém **chaves estrangeiras** que referenciam as **chaves primárias** das tabelas que estão sendo associadas. Cada registro na tabela intermediária representa uma **associação válida** entre os registros das tabelas principais.

## Exemplo prático

Suponha um sistema de cursos onde um **aluno pode se inscrever em vários cursos**, e **um curso pode ter vários alunos**. Isso configura um relacionamento **muitos para muitos** entre as tabelas `Alunos` e `Cursos`.

Como resolver isso? Criamos uma **tabela intermediária** chamada `Matriculas`, que armazena as associações entre `Alunos` e `Cursos`.

### Estrutura das tabelas

```sql
CREATE TABLE Alunos (
    id INT PRIMARY KEY,
    nome VARCHAR(100)
);

CREATE TABLE Cursos (
    id INT PRIMARY KEY,
    titulo VARCHAR(100)
);

CREATE TABLE Matriculas (
    aluno_id INT,
    curso_id INT,
    data_matricula DATE,
    PRIMARY KEY (aluno_id, curso_id),
    FOREIGN KEY (aluno_id) REFERENCES Alunos(id),
    FOREIGN KEY (curso_id) REFERENCES Cursos(id)
);
