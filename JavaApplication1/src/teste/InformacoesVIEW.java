package teste;

import javax.swing.JOptionPane;

public class InformacoesVIEW {

    public static void main(String[] args) {

        InformacoesDTO informacoesDTO = new InformacoesDTO();
        InformacoesDAO informacoesDAO = new InformacoesDAO();

        informacoesDTO.setNome(JOptionPane.showInputDialog("Informe seu nome: "));
        informacoesDTO.setCpf(JOptionPane.showInputDialog("Informe seu CPF: "));
        informacoesDTO.setIdade(JOptionPane.showInputDialog("Informe sua idade: "));
        informacoesDTO.setRg(JOptionPane.showInputDialog("Informe seu RG: "));
        informacoesDTO.setCidade(JOptionPane.showInputDialog("Informe a sua cidade: "));
        
        
        JOptionPane.showMessageDialog(null, informacoesDAO.retornar(informacoesDTO));
        
    }

}
