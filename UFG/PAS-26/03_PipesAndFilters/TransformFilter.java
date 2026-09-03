import java.util.List;

public class TransformFilter {

    public List<Venda> processar(List<Venda> vendas) {

        for (Venda venda : vendas) {

            double valorTotal =
                venda.getQuantidade()
                * venda.getPrecoUnitario();

            venda.setValorTotal(valorTotal);
        }

        return vendas;
    }
}