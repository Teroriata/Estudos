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