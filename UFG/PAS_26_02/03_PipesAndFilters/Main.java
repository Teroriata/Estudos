import java.util.List;

public class Main {

    public static void main(String[] args) {

        // Filtro 1
        ReadFilter readFilter = new ReadFilter();

        List<RegistroVenda> registros =
            readFilter.processar("vendas.csv");


        // Filtro 2
        CleanFilter cleanFilter = new CleanFilter();

        List<Venda> vendasValidas =
            cleanFilter.processar(registros);


        // Filtro 3
        TransformFilter transformFilter =
            new TransformFilter();

        List<Venda> vendasTransformadas =
            transformFilter.processar(vendasValidas);


        // Filtro 4
        SumFilter sumFilter = new SumFilter();

        ResumoVendas resumo =
            sumFilter.processar(vendasTransformadas);


        // Filtro 5
        ReportFilter reportFilter =
            new ReportFilter();

        String relatorio =
            reportFilter.processar(resumo);


        System.out.println(relatorio);
    }
}