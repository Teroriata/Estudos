import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

public class ReadFilter {

    public List<RegistroVenda> processar(String caminhoArquivo) {

        List<RegistroVenda> registros = new ArrayList<>();

        try (
            BufferedReader leitor =
                new BufferedReader(new FileReader(caminhoArquivo))
        ) {

            String linha;

            // Ignora o cabeçalho
            leitor.readLine();

            while ((linha = leitor.readLine()) != null) {

                String[] dados = linha.split(",", -1);

                if (dados.length == 4) {

                    RegistroVenda registro = new RegistroVenda(
                        dados[0].trim(),
                        dados[1].trim(),
                        dados[2].trim(),
                        dados[3].trim()
                    );

                    registros.add(registro);
                }
            }

        } catch (IOException e) {
            System.out.println(
                "Erro ao ler arquivo: " + e.getMessage()
            );
        }

        return registros;
    }
}