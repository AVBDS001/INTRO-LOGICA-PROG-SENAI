
package application;

import entities.Cardapio;
import entities.Cliente;
import entities.ItensDoCardapio;
import java.util.ArrayList;
import java.util.List;
import java.util.Locale;
import java.util.Scanner;

public class Teste2 {

    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        
        Cardapio c = new Cardapio();
        
        c.menu();
        
        System.out.println();
        System.out.print("Insira a quantidade de pedidos: ");
        int qtd = sc.nextInt();
        
        List<ItensDoCardapio> itens = new ArrayList<>();
        
        sc.nextLine();
        for(int i = 0; i < qtd; i++) {
            System.out.print("Insira o nome do prato que estava no menu: ");
            String nome = sc.nextLine();
            System.out.print("Insira o preço do prato que estava no menu: ");
            double preco = sc.nextDouble();
            sc.nextLine();
            ItensDoCardapio item = new ItensDoCardapio(nome, preco);
            itens.add(item);
        }
        System.out.println();
        
        System.out.println("DADOS DO CLIENTE");
        System.out.print("Insira o nome do cliente: ");
        String nomeCliente = sc.nextLine();
        System.out.print("Insira o email do cliente: ");
        String emailDoCliente = sc.next();
        System.out.print("Insira o ID da conta: ");
        int ID = sc.nextInt();
        Cliente cliente = new Cliente(nomeCliente, emailDoCliente, ID);
        
        double total = 0;
        for (ItensDoCardapio it : itens) {
            total += it.getPreco();
        }
        System.out.printf("Total de despesas: %.2f", total);
        
        sc.close();
    }
}
