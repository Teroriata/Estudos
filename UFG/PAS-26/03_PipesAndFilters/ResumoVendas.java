public class ResumoVendas {

    private int vendasValidas;
    private int produtosVendidos;
    private double valorTotal;

    public ResumoVendas(
        int vendasValidas,
        int produtosVendidos,
        double valorTotal
    ) {
        this.vendasValidas = vendasValidas;
        this.produtosVendidos = produtosVendidos;
        this.valorTotal = valorTotal;
    }

    public int getVendasValidas() {
        return vendasValidas;
    }

    public int getProdutosVendidos() {
        return produtosVendidos;
    }

    public double getValorTotal() {
        return valorTotal;
    }
}