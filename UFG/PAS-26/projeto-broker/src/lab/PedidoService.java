package lab;

public class PedidoService implements Servico {

    @Override
    public String executar(String parametro) {

        int codigoPedido = Integer.parseInt(parametro);

        switch (codigoPedido) {
            case 1:
                return "Pedido 1 - Aguardando pagamento";

            case 2:
                return "Pedido 2 - Em transporte";

            case 3:
                return "Pedido 3 - Finalizado";

            default:
                return "Pedido não localizado";
        }
    }
}