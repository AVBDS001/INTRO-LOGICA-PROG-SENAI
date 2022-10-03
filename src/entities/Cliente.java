
package entities;

public class Cliente {
    private String nomeCliente;
    private String emailDoCliente;
    private Integer idDaConta;
    
    
    public Cliente() {
    }

    public Cliente(String nomeCliente, String emailDoCliente, Integer idDaConta) {
        this.nomeCliente = nomeCliente;
        this.emailDoCliente = emailDoCliente;
        this.idDaConta = idDaConta;
    }

    public String getNomeCliente() {
        return nomeCliente;
    }

    public void setNomeCliente(String nomeCliente) {
        this.nomeCliente = nomeCliente;
    }

    public String getEmailDoCliente() {
        return emailDoCliente;
    }

    public void setEmailDoCliente(String emailDoCliente) {
        this.emailDoCliente = emailDoCliente;
    }

    public Integer getIdDaConta() {
        return idDaConta;
    }
}
