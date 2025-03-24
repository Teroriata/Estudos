CREATE DATABASE cadastro
DEFAULT CHARACTER SET utf8mb4
DEFAULT COLLATE utf8mb4_general_ci;

CREATE TABLE pessoas (
id int NOT NULL AUTO_INCREMENT,
nome varchar(30) NOT NULL,
nascimento date,
sexo enum('M','F'),
peso decimal(5,2),
altura decimal(3,2),
nacionalidade varchar(20) DEFAULT 'Brasil',
PRIMARY KEY (id)
)DEFAULT CHARACTER SET utf8mb4;

INSERT INTO pessoas
(id, nome, nascimento, sexo, peso, altura, nacionalidade)
VALUES
(DEFAULT,'Mateus', '1998-09-17', 'M', 112.2, 1.68, 'Brasil');

INSERT INTO pessoas
( nome, nascimento, sexo, peso, altura, nacionalidade)
VALUES
('Mateus', '1998-09-17', 'M', 112.2, 1.68, 'Brasil');

INSERT INTO pessoas VALUES
(DEFAULT,'Zima Blue', '2000-03-13', 'M', 112.2, 1.75, 'Brasil');

INSERT INTO pessoas VALUES
(DEFAULT, 'Ana Souza', '1995-07-22', 'F', 65.4, 1.68, 'Brasil'),
(DEFAULT, 'Carlos Mendes', '1988-11-05', 'M', 80.1, 1.82, 'Portugal'),
(DEFAULT, 'Emily Clark', '1992-06-18', 'F', 55.8, 1.65, 'EUA'),
(DEFAULT, 'Jorge Lima', '2001-09-30', 'M', 90.3, 1.78, 'Brasil'),
(DEFAULT, 'Sophie Dubois', '1997-04-25', 'F', 72.0, 1.72, 'França'),
(DEFAULT, 'Takashi Nakamura', '1985-12-10', 'M', 67.5, 1.70, 'Japão'),
(DEFAULT, 'Lina Torres', '1999-08-14', 'F', 58.7, 1.60, 'México'),
(DEFAULT, 'Omar Hassan', '1993-05-07', 'M', 85.9, 1.80, 'Egito'),
(DEFAULT, 'Elena Petrova', '1990-02-28', 'F', 63.2, 1.75, 'Rússia');

select * from pessoas;

SHOW STATUS;

DESCRIBE pessoas;
ALTER TABLE pessoas ADD COLUMN profissao varchar(30); # adiciona coluna
ALTER TABLE pessoas DROP COLUMN profissao; # remove coluna

ALTER TABLE pessoas ADD COLUMN profissao varchar(30) AFTER nome; # adiciona uma colina  depois de "nome"
ALTER TABLE pessoas ADD  codigo int FIRST; # Adiciona uma coluna no começo.
# não precisa espeficificar quando for no final.

ALTER TABLE pessoas MODIFY COLUMN profissao VARCHAR(20) NOT NULL DEFAULT''; #  modificar columa, não da para renomear
ALTER TABLE pessoas CHANGE COLUMN profissao prof varchar(20) NOT NULL DEFAULT '';  #  modificar columa, da para renomear 
ALTER TABLE pessoas RENAME TO gafanhotos; # renomear o nome da tabela inteira.

DESCRIBE gafanhotos;

CREATE TABLE IF NOT EXISTS cursos (
	
	nome VARCHAR(30) NOT NULL UNIQUE,
	descricao TEXT,
    carga INT UNSIGNED,
    totaulas INT,
    ano YEAR DEFAULT '2025'
)DEFAULT CHARACTER SET utf8mb4;

DROP TABLE cursos; # apagaria a taela cursos

SELECT * FROM cursos;

ALTER TABLE cursos add column idCurso int FIRST;
ALTER TABLE cursos ADD PRIMARY KEY(idCurso);

DESCRIBE cursos;

create table if not exists teste(
   id int,
   nome varchar(10),
   idade int
)default character set utf8mb4;

insert into teste value
(1,'rato',23),
(2,'mateus',26),
(3,'jodis',20),
(4,'abelha',24);

select * from teste;

DROP TABLE if exists teste;
