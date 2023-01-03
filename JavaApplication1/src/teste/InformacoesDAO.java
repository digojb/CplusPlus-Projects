package teste;

public class InformacoesDAO {

    public String retornar(InformacoesDTO informacoesDTO) {

        return "Nome: " + informacoesDTO.getNome() + "\nCPF: "
                + informacoesDTO.getCpf() + "\nIdade: " + informacoesDTO.getIdade() + "\nRG: "
                + informacoesDTO.getRg() + "\nCidade: " + informacoesDTO.getCidade();

    }

}
