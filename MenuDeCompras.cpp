#include <iostream>
#include <stdio.h>
#include <locale.h>
using namespace std;

	string produto;
	double preco;
	int qtd, codigo;

void menu() {
	cout<<"Menu Principal"<<endl;
	cout<<"Codigo "<< " Produto " << " Valor "<<endl;
	cout<<"1 "<<"       Camisa"<<"   25.50"<<endl;
	cout<<"2 "<<"       Calca"<<"    60.25"<<endl;
	cout<<"3 "<<"       Gravata"<<"   15.30"<<endl;
}

float valorTotal(float preco,int qtd) {
	return preco * qtd;
}


int main() {
	
	menu();
	cout<<" \n";
	cout<<"Insira o codigo do produto: "<<endl;
	cin>>codigo;
	
	cout<<"Insira a quantidade desejada: "<<endl;
	cin>>qtd;
	
	switch(codigo) {
		case 1: {
			cout<<" \n";
			cout<<"R$ "<<valorTotal(25.50, qtd);
			break;
		}
		case 2: {
			cout<<" \n";
			cout<<"R$ "<<valorTotal(60.25, qtd);
			break;
		}
		case 3: {
			cout<<" \n";
			cout<<"R$ "<<valorTotal(15.30, qtd);
			break;
		}
	}
			
}
