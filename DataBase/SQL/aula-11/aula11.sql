select * from cursos;
select * from gafanhotos;

select * from cursos order by nome;

select * from cursos order by nome desc; /* DESCENDET */

select * from cursos order by nome asc; /* ASCENDENT */

select nome, carga, ano  from cursos order by nome; /* filtra as colunas */

select ano, nome, carga   from cursos order by ano desc; 

select ano, nome, carga   from cursos order by ano desc, nome; /* filtra as colunas */

select * from cursos where ano = '2018' order by nome;

select nome, carga from cursos where ano = '2018' order by nome;

show databases;

select * from cursos;

select nome, carga,ano from cursos where ano < 2018 order by ano, nome;

select nome, ano from cursos where ano between 2014 and 2016 order by ano desc, nome asc;

select idcurso, nome from cursos where ano in ('2014', 2016, 2018) order by nome;



