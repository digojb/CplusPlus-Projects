package testeHeranca;

public class JuridicoDAO {

    public String retornoRG(JuridicoDTO juridicoDTO) {

        return "\nRG: " + juridicoDTO.getCnpj();

    }

}
