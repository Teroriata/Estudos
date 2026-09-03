import java.util.ArrayList;
import java.util.List;

public class CleanFilter {

    public List<Venda> processar(List<RegistroVenda> registros) {

        List<Venda> vendasValidas = new ArrayList<>();

        for (RegistroVenda registro : registros) {

            try {

                if (
                    registro.getQuantidade() == null ||
                    registro.getQuantidade().isEmpty()
                ) {
                    continue;
                }

                if (
                    registro.getPrecoUnitario() == null ||
                    registro.getPrecoUnitario().isEmpty()
                ) {
                    continue;
                }

                int quantidade =
                    Integer.parseInt(registro.getQuantidade());

                double preco =
                    Double.parseDouble(registro.getPrecoUnitario());

                if (quantidade <= 0) {
                    continue;
                }

                if (preco < 0) {
                    continue;
                }

                Venda venda = new Venda(
                    registro.getIdVenda(),
                    registro.getProduto(),
                    quantidade,
                    preco
                );

                vendasValidas.add(venda);

            } catch (NumberFormatException e) {

                // Registro com número inválido é descartado

            }
        }

        return vendasValidas;
    }
}