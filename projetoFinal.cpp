#include<iostream>
#include<cstdlib>
#include<stdlib.h>
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

void menuVendas() {
    cout<<"Menu de vendas"<<endl;
    cout<<"1-Exibir clientes cadastrados"<<endl;
    cout<<"2-Exibir funcionarios cadastrados"<<endl;
    cout<<"3-Exibir produtos cadastrados"<<endl;
    cout<<"4-Realizar uma venda"<<endl;
    cout<<"5-Voltar para o menu principal"<<endl;
}

void menuRelatorios() {
	cout<<"Menu cadastro"<<endl;
	cout<<"1-Exibir a maior venda"<<endl;
	cout<<"2-Exibir o total de todas as vendas"<<endl;
	cout<<"3-Exibir a venda de um cliente especifico"<<endl;
	cout<<"4-Voltar para o menu principal"<<endl;
}

double maiorValor = 0.0;
int idDaMaiorVenda = 0;
double soma = 0.0;


struct Cliente {
	int id;
	string nome;
	string telefone;
	string cpf;
};
int idClienteEscolhido = 0;

struct Funcionario {
	int id;
	string nome;
	string telefone;
	string cpf;
};

int idFuncionarioEscolhido = 0;

struct Produto {
	int id;
	string nome;
	int qtdProdutos;
	double preco;	
};
int idProdutoEscolhido = 0;
int qtdAtualDoProduto = 0;

struct Venda {
    int id;
    int id_cliente;
    int id_funcionario;
    int id_produto;
    int qtdVendas;
    string data_saida;
};

int clientesSize = 0;
int funcionariosSize = 0;
int produtosSize = 0;
int vendasSize = 0;
Cliente clientes[999];
Funcionario funcionarios[999];
Produto produtos[999];
Venda vendas[999];

int gerarID() {
    int N = 99999;
    for (int i = 0; i < 1; i++) {
        return rand() % N;
    }
}
//Metodos dos clientes
void cadastrarCliente() {
    for (int i = 0; i < 999; i++) {
        if(clientes[i].id == 0) {
            clientes[i].id = gerarID();
            cout<<"ID DO CLIENTE "<<i+1<<" : "<<clientes[i].id;
            cout<<"\n";
            cout<<"Informe o nome do cliente "<<i+1<<" : ";
            cin>>clientes[i].nome;
            cout<<"\n";

            cout<<"Informe o telefone do cliente "<<i+1<<" : ";
            cin>>clientes[i].telefone;
            cout<<"\n";
            cout<<"Informe o CPF do cliente "<<i+1<<" : ";
            cin>>clientes[i].cpf;
            cout<<"\n";
            clientesSize++;
            break;
        }
    }
}

void exibirClientesCadastrados() {
    for (int i = 0; i < clientesSize; i++) {
        cout<<"ID DO CLIENTE "<<i+1<<" : "<<clientes[i].id<<endl;
        cout<<"NOME DO CLIENTE "<<i+1<<" : "<<clientes[i].nome<<endl;
        cout<<"TELEFONE DO CLIENTE "<<i+1<<" : "<<clientes[i].telefone<<endl;
        cout<<"CPF DO CLIENTE "<<i+1<<" : "<<clientes[i].cpf<<endl;
        cout<<"\n";
    }
}

//Metodos dos funcionarios
void cadastrarFuncionario() {
    for (int i = 0; i < 999; i++) {
        if (funcionarios[i].id == 0) {
            funcionarios[i].id = gerarID();
            cout<<"ID DO FUNCINARIO "<<i+1<<" : "<<funcionarios[i].id;
            cout<<"\n";
            cout<<"Informe o nome do funcionario "<<i+1<<" : ";
            cin>>funcionarios[i].nome;
            cout<<"\n";

            cout<<"Informe o telefone do funcionario "<<i+1<<" : ";
            cin>>funcionarios[i].telefone;
            cout<<"\n";
            cout<<"Informe o CPF do funcionario "<<i+1<<" : ";
            cin>>funcionarios[i].cpf;
            cout<<"\n";
            funcionariosSize++;
            break;
        }
    }
}

void exibirFuncionariosCadastrados() {
    for (int i = 0; i < funcionariosSize; i++) {
        cout<<"ID DO FUNCIONARIOS "<<i+1<<" : "<<funcionarios[i].id<<endl;
        cout<<"NOME DO FUNCIONARIOS "<<i+1<<" : "<<funcionarios[i].nome<<endl;
        cout<<"TELEFONE DO FUNCIONARIOS "<<i+1<<" : "<<funcionarios[i].telefone<<endl;
        cout<<"CPF DO FUNCIONARIOS "<<i+1<<" : "<<funcionarios[i].cpf<<endl;
        cout<<"\n";
    }
}

//Metodos dos produtos
void cadastrarProduto() {
    for (int i = 0; i < 999; i++) {
        if (produtos[i].id == 0) {
            produtos[i].id = gerarID();
            cout<<"ID DO PRODUTO "<<i+1<<" : "<<produtos[i].id;
            cout<<"\n";
            cout<<"Informe o nome do produto: "<<i+1<<" : ";
            cin>>produtos[i].nome;
            cout<<"\n";

            cout<<"Informe quantos produtos "<<i+1<<" serao adicionados no estoque: ";
            cin>>produtos[i].qtdProdutos;
            cout<<"\n";

            cout<<"Insira o preco do produto "<<i+1<< " : ";
            cin>>produtos[i].preco;
            cout<<"\n";
            produtosSize++;
            break;
        }
    }
}

void exibirProdutosCadastrados() {
    for (int i = 0; i < produtosSize; i++) {
        cout<<"ID DO PRODUTO "<<i+1<<" : "<<produtos[i].id<<endl;
        cout<<"NOME DO PRODUTO "<<i+1<<" : "<<produtos[i].nome<<endl;
        cout<<"QUANTIDADE DO PRODUTO "<<i+1<<" : "<<produtos[i].qtdProdutos<<endl;
        cout<<"PRECO DO PRODUTO (R$) "<<i+1<<" : "<<produtos[i].preco<<endl;
        cout<<"\n";
    }
}

//METODOS DA VENDAS
double subtotal = 0.0;


int main() {
    //NA HORA DE TESTAR O CODIGO RECOMENDO ANOTAR OS CODIGOS PARA NAO ESQUECER
    //MENU PRINCIPAL
    int opPrincipal = 0;
    while (opPrincipal != 4) {
        system("clear");
        menuPrincipal();
        cout<<"Insira uma opcao do menu: ";
        cin>>opPrincipal;
        cout<<"\n";

        if (opPrincipal == 1) {
            int opCadastro = 0;
            char addCliente = 'N';
            char addFuncionario = 'N';
            char addProduto = 'N';
            while(opCadastro != 4) {
                //MENU CADASTRO
                menuCadastro();
                cout<<"Insira uma opcao do menu: ";
                cin>>opCadastro;
                cout<<"\n";

                switch(opCadastro) {
                    case 1:
                        do {
                            cadastrarCliente();
                            cout<<"Deseja cadastrar mais um cliente? [S/N]: ";
                            cin>>addCliente;
                            cout<<"\n";
                        } while(addCliente == 'S' || addCliente == 's');
                        break;
                    
                    case 2:
                        do {
                            cadastrarFuncionario();
                            cout<<"Deseja cadastrar mais um funcionario? [S/N]: ";
                            cin>>addFuncionario;
                            cout<<"\n";
                        } while(addFuncionario == 'S' || addFuncionario == 's');
                        break;
                    
                    case 3:
                        do {
                            cadastrarProduto();
                            cout<<"Deseja cadastrar mais um produto? [S/N]: ";
                            cin>>addProduto;
                            cout<<"\n";
                        } while(addProduto == 'S' || addProduto == 's');
                        break;
                }
            }
        }
        else if(opPrincipal == 2) {
            //MENU DE VENDAS
            int opVendas = 0;
            //int idProdutoEscolhido = 0;
            int quantidadeParaComprar = 0;
            if (clientes[0].id == 0 && produtos[0].id == 0 && funcionarios[0].id == 0) {
                    cout<<"ERRO: NECESSARIO CADASTRAR OS DADOS DO CLIENTE, DOS FUNCIONARIOS, E DOS PRODUTOS PARA REALIZAR VENDAS"<<endl;
                    cout<<"PRESSIONE 5 PARA RETORNAR AO MENU PRINCIPAL: ";
                    cin>>opVendas;
                    cout<<"\n";
                }
            while (opVendas != 5) {
                //system("clear");
                menuVendas();
                cout<<"RECOMENDACAO: UTILIZE AS OPCOES DE EXIBIR PRODUTOS ANTES DE REALIZAR UMA COMPRA"<<endl;
                cout<<"Insira uma opcao do menu: ";
                cin>>opVendas;
                cout<<"\n";
                switch(opVendas) {
                    case 1:
                        exibirClientesCadastrados();
                        break;
                    
                    case 2:
                        exibirFuncionariosCadastrados();
                        break;
                    
                    case 3:
                        exibirProdutosCadastrados();
                        break;

                    case 4:
                        //REALIZAÇÃO DA COMPRA
                        cout<<"Insira o ID do produto a ser comprado: ";
                        cin>>idProdutoEscolhido;
                        cout<<"\n";

                        cout<<"Insira o ID do cliente que solicitou a compra: ";
                        cin>>idClienteEscolhido;
                        cout<<"\n";

                        for (int i = 0; i < clientesSize; i++) {
                            if (idClienteEscolhido == clientes[i].id) {
                                cout<<"CLIENTE: "<<clientes[i].nome<<" SELECIONADO "<<endl;
                            }
                        }

                        for (int i = 0; i < produtosSize; i++) {
                            if (idProdutoEscolhido == produtos[i].id) {
                                cout<<"PRODUTO: "<<produtos[i].nome<<" SELECIONADO "<<endl;
                                cout<<"Insira a quantidade de produtos que sera comprada: ";
                                cin>>quantidadeParaComprar;
                                cout<<"\n";
                                //remoção do produto do estoque
                                qtdAtualDoProduto = produtos[i].qtdProdutos - quantidadeParaComprar;
                                if (quantidadeParaComprar >= produtos[i].qtdProdutos) {
                                    cout<<"NAO TEMOS ESSA QUANTIDADE NO ESTOQUE NO MOMENTO !!!"<<endl;
                                }
                                vendas[i].id = gerarID();
                                cout<<"ID DE IDENTIFICACAO DA VENDA: "<<vendas[i].id<<endl;
                                cout<<"ID DO CLIENTE QUE REQUISITOU A VENDA: "<<clientes[i].id<<endl;
                                cout<<"QUANTIDADE ATUAL DO PRODUTO NO ESTOQUE: "<<qtdAtualDoProduto<<endl;
                                subtotal = produtos[i].preco * quantidadeParaComprar; 
                                cout<<"VALOR DA VENDA: $ "<<subtotal;
                                cout<<"\n";
                                cout<<"\n";
                                vendasSize++;
                            }
                        }
                        break;
                }
            }
        }

        else if (opPrincipal == 3) {
            //MENU DE RELATORIOS
            int opMenuRelatorios = 0;
            int codigoDaVenda = 0;
            if (clientes[0].id == 0 && produtos[0].id == 0 && funcionarios[0].id == 0) {
                    cout<<"ERRO: NECESSARIO CADASTRAR OS DADOS DO CLIENTE, DOS FUNCIONARIOS, E DOS PRODUTOS PARA CHECAR OS RELATORIOS"<<endl;
                    cout<<"PRESSIONE 4 PARA RETORNAR AO MENU PRINCIPAL: ";
                    cin>>opMenuRelatorios;
                    cout<<"\n";
                }
            while (opMenuRelatorios != 4) {
                menuRelatorios();
                cout<<"Insira uma opcao: ";
                cin>>opMenuRelatorios;
                cout<<"\n";

                switch(opMenuRelatorios) {
                    case 1:
                        //system("clear");
                        //double maiorValor = 0.0;
                        //int idDaMaiorVenda = 0;

                        for (int i = 0; i < vendasSize; i++) {
                            if (maiorValor < subtotal) {
                                maiorValor = subtotal;
                                idDaMaiorVenda = vendas[i].id;
                            }
                        }
                        cout<<"MAIOR VENDA $: "<<maiorValor<<endl;
                        cout<<"ID DA MAIOR VENDA: "<<idDaMaiorVenda<<endl;
                        cout<<"\n";
                        break;

                    case 2:
                        //double soma = 0.0;
                        for (int i = 0; i < vendasSize; i++) {
                            soma += subtotal;
                        }
                        cout<<"VALOR TOTAL DE VENDAS: $ "<<soma<<endl;
                        cout<<"\n";
                        break;

                    case 3:
                        exibirClientesCadastrados();
                        cout<<"Escolha o ID do cliente que voce quer averiguar a venda: ";
                        cin>>idClienteEscolhido;
                        cout<<"\n";

                        for (int i = 0; i < clientesSize; i++) {
                            if (idClienteEscolhido == clientes[i].id) {
                                cout<<"Insira o codigo de venda que foi gerado na venda desse cliente: ";
                                cin>>codigoDaVenda;
                                cout<<"\n";

                                for (int i = 0; i < vendasSize; i++) {
                                    if (codigoDaVenda == vendas[i].id) {
                                        cout<<"ID DE IDENTIFICACAO DA VENDA: "<<vendas[i].id<<endl;
                                        cout<<"ID DO CLIENTE QUE REQUISITOU A VENDA: "<<clientes[i].id<<endl;
                                        cout<<"QUANTIDADE ATUAL DO PRODUTO NO ESTOQUE: "<<qtdAtualDoProduto<<endl;
                                        cout<<"VALOR DA VENDA: $ "<<subtotal<<endl;
                                        cout<<"NOME DO CLIENTE: "<<clientes[i].nome<<endl;
                                        cout<<"NOME DO FUNCIONARIO: "<<funcionarios[i].nome<<endl;
                                        cout<<"\n";
                                        cout<<"\n";
                                    }
                                }
                            }
                        }
                        break;    
                }
            }
        }
    }
   return 0; 
}
