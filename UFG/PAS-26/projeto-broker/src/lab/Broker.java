package lab;

import java.util.HashMap;
import java.util.Map;

public class Broker {

    private final Map<String, Servico> servicos;

    public Broker() {
        servicos = new HashMap<>();
    }

    public void registrar(String nome, Servico servico) {

        servicos.put(nome, servico);

        System.out.println("[Broker] Serviço registrado: " + nome);
    }

    public String solicitar(String nome, String parametro) {

        Servico servico = servicos.get(nome);

        if (servico == null) {
            return "Serviço não encontrado: " + nome;
        }

        System.out.println(
            "[Broker] Encaminhando solicitação para: " + nome
        );

        return servico.executar(parametro);
    }
}