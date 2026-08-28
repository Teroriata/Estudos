import java.util.List;

public class SumFilter {

    public ResumoVendas processar(List<Venda> vendas) {

        int quantidadeVendas = vendas.size();

        int totalProdutos = 0;

        double valorTotalVendas = 0;

        for (Venda venda : vendas) {

            totalProdutos += venda.getQuantidade();

            valorTotalVendas += venda.getValorTotal();
        }

        return new ResumoVendas(
            quantidadeVendas,
            totalProdutos,
            valorTotalVendas
        );
    }
}