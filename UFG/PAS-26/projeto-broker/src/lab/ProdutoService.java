package lab;

public class ProdutoService implements Servico {

    @Override
    public String executar(String parametro) {

        int id = Integer.parseInt(parametro);

        switch (id) {

            case 1:
                return "Notebook - R$ 3500,00";

            case 2:
                return "Mouse - R$ 80,00";

            case 3:
                return "Teclado - R$ 150,00";

            default:
                return "Produto não encontrado";
        }
    }
}