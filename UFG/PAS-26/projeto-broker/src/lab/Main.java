package lab;

public class Main {

    public static void main(String[] args) {

        // 1. Criar o Broker
        Broker broker = new Broker();

        // 2. Registrar os serviços
        broker.registrar(
            "produto",
            new ProdutoService()
        );

        broker.registrar(
            "consumidor",
            new ConsumidorService()
        );

        broker.registrar(
            "pedido",
            new PedidoService()
        );

        // 3. Criar o Cliente
        Cliente cliente = new Cliente(broker);

        // 4. Fazer solicitações
        cliente.consultarProduto(2);

        cliente.consultarConsumidor(1);

        cliente.consultarPedido(3);
        
        String retorno = broker.solicitar(
            "pagamento",
            "1"
        );

        System.out.println(retorno);
    }
}