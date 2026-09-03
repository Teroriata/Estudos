public class ReportFilter {

    public String processar(ResumoVendas resumo) {

        String relatorio = "";

        relatorio +=
            "========================================\n";

        relatorio +=
            "RELATÓRIO DE VENDAS\n";

        relatorio +=
            "========================================\n";

        relatorio +=
            "Vendas válidas: "
            + resumo.getVendasValidas()
            + "\n";

        relatorio +=
            "Produtos vendidos: "
            + resumo.getProdutosVendidos()
            + "\n";

        relatorio += String.format(
            "Valor total: R$ %,.2f%n",
            resumo.getValorTotal()
        );

        relatorio +=
            "========================================";

        return relatorio;
    }
}