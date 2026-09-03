public class RegistroVenda {

    private String idVenda;
    private String produto;
    private String quantidade;
    private String precoUnitario;

    public RegistroVenda(
        String idVenda,
        String produto,
        String quantidade,
        String precoUnitario
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

    public String getQuantidade() {
        return quantidade;
    }

    public String getPrecoUnitario() {
        return precoUnitario;
    }
}