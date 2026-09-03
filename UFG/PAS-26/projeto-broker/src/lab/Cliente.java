package lab;

public class Cliente {

    private final Broker broker;

    public Cliente(Broker broker) {
        this.broker = broker;
    }

    public void consultarProduto(int id) {

        System.out.println(
            "[Cliente] Consultando produto " + id
        );

        String resposta =
            broker.solicitar("produto", String.valueOf(id));

        System.out.println(
            "[Cliente] Resposta: " + resposta
        );
    }

    public void consultarConsumidor(int id) {

        System.out.println(
            "[Cliente] Consultando consumidor " + id
        );

        String resposta =
            broker.solicitar("consumidor", String.valueOf(id));

        System.out.println(
            "[Cliente] Resposta: " + resposta
        );
    }
    public void consultarPedido(int codigo) {

        System.out.println(
            "[Cliente] Buscando pedido de código " + codigo
        );

        String resultado =
            broker.solicitar("pedido", String.valueOf(codigo));

        System.out.println(
            "[Cliente] Resultado da consulta: " + resultado
        );
    }

}