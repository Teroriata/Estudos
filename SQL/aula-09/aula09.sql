Describe cursos;
desc gafanhotos;

describe gafanhotos;

select * from gafanhotos;
select * from cursos;

update cursos set nome ='ph' where idCurso = '4';

INSERT INTO cursos (idCurso,nome, descricao, carga, totaulas, ano) 
VALUES 
(3, 'Programação Web', 'Curso de desenvolvimento web com HTML, CSS e JS', 60, 30, 2025),
(4,'Inteligência Artificial', 'Curso introdutório sobre IA e Machine Learning', 80, 40, 2025);

