public class Venda {

    private String idVenda;
    private String produto;
    private int quantidade;
    private double precoUnitario;
    private double valorTotal;

    public Venda(
        String idVenda,
        String produto,
        int quantidade,
        double precoUnitario
    ) {
        this.idVenda = idVenda;
        this.produto = produto;
        this.quantidade = quantidade;
        this.precoUnitario = precoUnitario;
    }

    public String getIdVenda() {
        return idVenda;
    }

    public String getProduto() {
        return produto;
    }

    public int getQuantidade() {
        return quantidade;
    }

    public double getPrecoUnitario() {
        return precoUnitario;
    }

    public double getValorTotal() {
        return valorTotal;
    }

    public void setValorTotal(double valorTotal) {
        this.valorTotal = valorTotal;
    }
}