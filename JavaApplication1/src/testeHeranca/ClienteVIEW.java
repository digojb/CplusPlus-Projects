package testeHeranca;

import javax.swing.JOptionPane;

public class ClienteVIEW {
    public static void main(String[] args) {
        
        ClienteDTO clienteDTO = new ClienteDTO();
        ClienteDAO clienteDAO = new ClienteDAO();
        
        clienteDTO.setNome(JOptionPane.showInputDialog("Informe seu nome: "));
        clienteDTO.setSobrenome(JOptionPane.showInputDialog("Informe seu sobrenome: "));
        clienteDTO.setIdade(JOptionPane.showInputDialog("Informe sua idade: "));
        
        JOptionPane.showMessageDialog(null, clienteDAO.retornar(clienteDTO));
        
        FisicoDTO fisicoDTO = new FisicoDTO();
        FisicoDAO fisicoDAO = new FisicoDAO();
        
        fisicoDTO.setCpf(JOptionPane.showInputDialog("Informe o seu CPF: "));
        
        JOptionPane.showMessageDialog(null, fisicoDAO.retornarCPF(fisicoDTO));
        
        JuridicoDTO juridicoDTO = new JuridicoDTO();
        JuridicoDAO juridicoDAO = new JuridicoDAO();
        
        juridicoDTO.setCnpj(JOptionPane.showInputDialog("Informe o CNPJ: "));
        
        JOptionPane.showMessageDialog(null, juridicoDAO.retornoRG(juridicoDTO));
        
    }
}
