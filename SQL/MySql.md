### **DDL vs. DML**  

No SQL, os comandos são classificados em diferentes categorias. As mais importantes são **DDL** e **DML**.  

---

## 🔹 **DDL (Data Definition Language) – Linguagem de Definição de Dados**  
Usada para definir, alterar ou excluir **estruturas do banco de dados** (tabelas, índices, esquemas, etc.).  

### **Principais comandos DDL**:  
| Comando | Descrição |
|---------|------------|
| `CREATE` | Cria tabelas, bancos de dados, índices, etc. |
| `ALTER` | Modifica a estrutura de uma tabela (adicionar/remover colunas, mudar tipo de dados, etc.). |
| `DROP` | Remove tabelas, bancos de dados, etc. (⚠️ **Irreversível!**) |
| `TRUNCATE` | Remove todos os registros de uma tabela, mas mantém a estrutura. |
  
 **Exemplo DDL:**  
```sql
CREATE TABLE pessoas (
    id INT PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(50) NOT NULL,
    idade INT
);
```

##  🔹 **DML (Data Manipulation Language) – Linguagem de Manipulação de Dados**
Usada para inserir, atualizar, excluir e consultar os dados dentro das tabelas.

### **Principais comandos DDL**:  
| Comando | Descrição |
|---------|------------|
| INSERT | Adiciona registros a uma tabela. |
| UPDATE | Modifica registros existentes. |
| DELETE | Remove registros específicos de uma tabela. |
| SELECT | Consulta dados dentro de uma tabela. |

 **Exemplo DML:**  
```sql
INSERT INTO pessoas (nome, idade) VALUES ('Ana', 25);

UPDATE pessoas SET idade = 26 WHERE nome = 'Ana';

DELETE FROM pessoas WHERE idade < 18;

SELECT * FROM pessoas;
```