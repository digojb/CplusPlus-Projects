package testeHeranca;

public class ClienteDAO {

    public String retornar(ClienteDTO clienteDTO) {

        return "Nome: " + clienteDTO.getNome() + "\nIdade: "
                + clienteDTO.getIdade() + "\nSobrenome: " + clienteDTO.getSobrenome();

    }

}
