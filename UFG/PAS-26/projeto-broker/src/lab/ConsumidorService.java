package lab;

public class ConsumidorService implements Servico {

    @Override
    public String executar(String parametro) {

        int id = Integer.parseInt(parametro);

        switch (id) {

            case 1:
                return "João";

            case 2:
                return "Maria";

            case 3:
                return "Carlos";

            default:
                return "Cliente não encontrado";
        }
    }
}