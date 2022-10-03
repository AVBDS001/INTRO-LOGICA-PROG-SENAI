
package entities;

public class ItensDoCardapio {
    private String nome;
    private Double preco;

    public ItensDoCardapio() {
    }

    public ItensDoCardapio(String nome, Double preco) {
        this.nome = nome;
        this.preco = preco;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public Double getPreco() {
        return preco;
    }
}
