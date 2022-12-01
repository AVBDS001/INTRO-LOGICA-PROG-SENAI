#include<iostream>
using namespace std;

void menuPrincipal() {
	cout<<"Menu principal"<<endl;
	cout<<"1-Cadastros"<<endl;
	cout<<"2-Vendas"<<endl;
	cout<<"3-Relatorios"<<endl;
	cout<<"4-Sair"<<endl;
}

void menuCadastro() {
	cout<<"Menu cadastro"<<endl;
	cout<<"1-Cadastrar cliente"<<endl;
	cout<<"2-Cadastrar funcionario"<<endl;
	cout<<"3-Cadastrar produto"<<endl;
	cout<<"4-Voltar para o menu principal"<<endl;
}

void menuRelatorios() {
	cout<<"Menu cadastro"<<endl;
	cout<<"1-Exibir a maior venda"<<endl;
	cout<<"2-Exibir o total de todas as vendas"<<endl;
	cout<<"3-Exibir a venda de um cliente especifico"<<endl;
	cout<<"4-Exibir todas as vendas de um funcionario"<<endl;
}

struct Cliente {
	int id;
	string nome;
	string telefone;
	string cpf;
};

void cadastrarCliente() {
	int clientesSize;
	cout<<"Insira quantos clientes serao cadastrados: ";
	cin>>clientesSize;
	cout<<"\n";
	
	Cliente clientes[clientesSize] = {0};
	
	for (int i = 0; i < clientesSize; i++) {
		if (clientes[i].id == 0) {
			cout<<"Insira o ID do cliente "<<i+1<<" : ";
			cin>>clientes[i].id;
			cout<<"\n";
			
			cout<<"Insira o nome do cliente "<<i+1<<" : ";
			cin>>clientes[i].nome;
			cout<<"\n";
			
			cout<<"Insira o telefone do cliente "<<i+1<<" : ";
			cin>>clientes[i].telefone;
			cout<<"\n";
			
			cout<<"Insira o CPF do cliente "<<i+1<<" : ";
			cin>>clientes[i].cpf;
			cout<<"\n";
		}
	}
}

struct Funcionario {
	int id;
	string nome;
	string telefone;
	string cpf;
};

void cadastrarFuncionario() {
	int funcionariosSize;
	cout<<"Insira quantos funcionarios serao cadastrados: ";
	cin>>funcionariosSize;
	cout<<"\n";
	
	Funcionario funcionarios[funcionariosSize] = {0};
	
	for (int i = 0; i < funcionariosSize; i++) {
		if (funcionarios[i].id == 0) {
			cout<<"Insira o ID do funcionario "<<i+1<<" : ";
			cin>>funcionarios[i].id;
			cout<<"\n";
			
			cout<<"Insira o nome do funcionario "<<i+1<<" : ";
			cin>>funcionarios[i].nome;
			cout<<"\n";
			
			cout<<"Insira o telefone do funcionario "<<i+1<<" : ";
			cin>>funcionarios[i].telefone;
			cout<<"\n";
			
			cout<<"Insira o CPF do funcionario "<<i+1<<" : ";
			cin>>funcionarios[i].cpf;
			cout<<"\n";
		}
	}
}

struct Produto {
	int id;
	string nome;
	int qtd;
	double valor;	
};

void cadastrarProduto() {
	int produtosSize;
	cout<<"Insira quantos produtos serao cadastrados: ";
	cin>>produtosSize;
	cout<<"\n";
	
	Produto produtos[produtosSize] = {0};
	
	for (int i = 0; i < produtosSize; i++) {
		
		if (produtos[i].id == 0) {
			cout<<"Insira o ID do produto "<<i+1<<" : ";
			cin>>produtos[i].id;
			cout<<"\n";
			
			cout<<"Insira o nome do produto "<<i+1<<" : ";
			cin>>produtos[i].nome;
			cout<<"\n";
			
			cout<<"Insira quantos produtos "<<i+1<<" serao cadastrados: ";
			cin>>produtos[i].qtd;
			cout<<"\n";
		
			cout<<"Insira o preco do produto "<<i+1<<" : ";
			cin>>produtos[i].valor;
			cout<<"\n";
		}
	}
}

int main() {
	int op = 0;
	while(op != 4) {
		menuPrincipal();
		cout<<"Insira uma opcao do menu: ";
  		cin>>op;
		cout<<"\n";
		
		if (op == 1) {
			int opCadastro = 0;
			while(opCadastro != 4) {
				menuCadastro();
				cout<<"Insira uma opcao do menu: ";
				cin>>opCadastro;
				cout<<"\n";
			
				switch(opCadastro) {
					case 1:
						cadastrarCliente();
						break;
				
					case 2:
						cadastrarFuncionario();
						break;
					
					case 3:
						cadastrarProduto();
						break;
				}	
			}
		} 	
	}
	return 0;	
}
