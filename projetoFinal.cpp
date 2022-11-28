#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Cliente {
		int idCliente;
		string nomeCliente;
		string telefoneCliente;
		string cpfCliente;
	};
	
	void addCliente() {
		int qtdClientes;	
		cout<<"Insira quantos clientes voce ira cadastrar: ";
		cin>>qtdClientes;
		cout<<"\n";
		
		Cliente cliente[qtdClientes] = {0};
		
		for (int i = 0; i < qtdClientes; i++) {
			if (cliente[i].idCliente == 0) {
				//necessario resolver como gerar numeros aleatorios
				cliente[i].idCliente = rand();
				cout<<"\n";
				
				cout<<"Insira o nome do cliente: ";
				cin>>cliente[i].nomeCliente;
				cout<<"\n";
				
				cout<<"Insira o telefone do cliente nesse formato (71994542843): ";
				cin>>cliente[i].telefoneCliente;
				cout<<"\n";
				
				cout<<"Insira o CPF do cliente nesse formato (02069941594): ";
				cin>>cliente[i].cpfCliente;
				cout<<"\n";
			}
		}
		
	}
		
	struct Funcionario {
		int idFuncionario;
		string nomeFuncionario;
		string telefoneFuncionario;
		string cpfFuncionario;
	};
	
	void addFuncionario() {
		int qtdFuncionarios;	
		cout<<"Insira quantos funcionarios voce ira cadastrar: ";
		cin>>qtdFuncionarios;
		cout<<"\n";
		
		Funcionario funcionario[qtdFuncionarios] = {0};
		for (int i = 0; i < qtdFuncionarios; i++) {
			if (funcionario[i].idFuncionario == 0) {
				//necessario resolver como gerar numeros aleatorios
				funcionario[i].idFuncionario = rand();
				cout<<"\n";
				
				cout<<"Insira o nome do funcionario: ";
				cin>>funcionario[i].nomeFuncionario;
				cout<<"\n";
				
				cout<<"Insira o telefone do funcionario nesse formato (71994542843): ";
				cin>>funcionario[i].telefoneFuncionario;
				cout<<"\n";
				
				cout<<"Insira o CPF do funcionario nesse formato (02069941594): ";
				cin>>funcionario[i].cpfFuncionario;
				cout<<"\n";
			}
		}
	}
	
	struct Produto {
		int idProduto;
		string nomeProduto;
		int qtdProduto;
		int valorProduto;	
	};
	
	struct Venda {
		int id_venda;
		int id_cliente;
		int id_funcionario;
		int id_produto;
		int qtdVendas;
		string data_saida;
	};
	
	void menuPrincipal() {
		cout<<"Menu principal"<<endl;
		cout<<"1 - Cadastros"<<endl;
		cout<<"2 - Vendas"<<endl;
		cout<<"3 - Relatorios"<<endl;
		cout<<"4 - Sair"<<endl;
	}
	
	void menuCadastro() {
		cout<<"Menu Cadastro"<<endl;
		cout<<"1 - Cadastrar cliente"<<endl;
		cout<<"2 - Cadastrar funcionario"<<endl;
		cout<<"3 - Cadastrar produto"<<endl;
		cout<<"4 - Voltar para o menu principal"<<endl;
	}
	
	void menuRelatorios() {
		cout<<"1 - Exibir a maior venda"<<endl;
		cout<<"2 - Exibir o total de todas as vendas"<<endl;
		cout<<"3 - Exibir a venda de um cliente (inserir CPF)"<<endl;
		cout<<"4 - Exibir todas as vendas de um funcionario (inserir CPF)"<<endl;
	}

int main() {
	int opPrincipal = 0;
	int opCadastro = 0;
	while (opPrincipal != 4) {
		menuPrincipal();
		cout<<"Insira uma opcao: ";
		cin>>opPrincipal;
		cout<<"\n";
		break;
	}
	
	switch(opPrincipal) 
	{
		case 1:
			menuCadastro();
			cout<<"Insira uma opcao: ";
			cin>>opCadastro;
			cout<<"\n";
			   switch (opCadastro) {
			   		case 1:
			   			addCliente();
			   			break;
			   		case 2:
			   			addFuncionario();
			   			break;
			   		case 3:
			   			break;
			   }
			break;
	}
		
	return 0;
}
