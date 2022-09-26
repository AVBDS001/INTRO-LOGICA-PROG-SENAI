#include<iostream>
#include<stdio.h>

using namespace std;

int idade;
void classificar(int idade) {
	
	
	while (idade <= 0) {
	cout<<"VALOR INVALIDO DIGITE SUA IDADE NOVAMENTE: ";
	cin>>idade;
	}
	if (idade >= 1 && idade <= 5) {
		cout<<"Infantil"<<endl;
	}
	else if (idade >= 6 && idade <= 10) {
		cout<<"Juvenil A"<<endl;
	}
	else if (idade >= 11 && idade <= 15) {
		cout<<"Juvenil B"<<endl;
	}
	else if (idade >= 16 && idade <= 17) {
		cout<<"Jovem"<<endl;
	}
	else if (idade >= 18 && idade <= 30) {
		cout<<"Adulto"<<endl;
	}
	else if (idade > 30) {
		cout<<"Master"<<endl;
	}
}

int main() {
	cout<<"Insira a sua idade: ";
	cin>>idade;
	cout<<"\n";
	char resposta;
	while (resposta != 'S') {
		classificar(idade);
		cout<<"DESEJA SAIR DO PROGRAMA (Digite --> S para sair/Digite --> N para ficar): "<<endl;
		cin>>resposta;
		if (resposta == 'S') {
			break;
		}
		cout<<"Insira a sua idade: ";
		cin>>idade;
		cout<<"\n";
	}
}
