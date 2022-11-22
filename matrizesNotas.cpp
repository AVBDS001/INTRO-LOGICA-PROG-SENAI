#include<iostream>
#include<stdio.h>
using namespace std;

int op = 0;
double notas[3][3];

void menu() {
	cout<<"Menu principal"<<endl;
	cout<<"1 - Adicionar notas"<<endl;
	cout<<"2 - Exibir medias"<<endl;
	cout<<"3 - Exibir os aprovados"<<endl;
	cout<<"4 - Exibir os reprovados"<<endl;
	cout<<"5 - Sair"<<endl;
}
void addNotas() {
	for (int i = 0; i < 3; i++) {
		cout<<"Aluno na linha "<<i+1<<endl;
		for (int j = 0; j < 3; j++) {
			if (notas[i][j] == 0) {
				cout<<"Informe a nota da AV"<<j+1<<": "<<endl;
				cin>>notas[i][j];
			}
		}
	}
}
void getMedias() {
	double media = 0;
	for (int i = 0; i < 3; i++) {
		media = 0;
		cout<<"Media do aluno"<<i+1;
		for (int j = 0; j < 3; j++) {
			media += notas[i][j];
		}
		media /= 3;
		cout<<": "<<media<<endl;
	}
}
void getAprovados() {
	double media = 0;
	for (int i = 0; i < 3; i++) {
		media = 0;
		for (int j = 0; j < 3; j++) {
			media += notas[i][j];
		}
		media /= 3;
		if (media >= 7) {
			cout<<"Aluno da linha"<<i+1<<" Aprovado"<<endl;
		}
	}
}
void getReprovados() {
	double media = 0;
	for (int i = 0; i < 3; i++) {
		media = 0;
		for (int j = 0; j < 3; j++) {
			media += notas[i][j];
		}
		media /= 3;
		if (media < 7) {
			cout<<"Aluno da linha"<<i+1<<" Reprovado"<<endl;
		}
	}
}
void selecionarOpcao(int op) {
	switch(op) {
		case 1:
			addNotas();
			break;
		
		case 2:
			getMedias();
			break;
		case 3:
			getAprovados();
			break;
		case 4:
			getReprovados();
			break;
	}
}

int main() {
	do {
		menu();
		cout<<"Informe a opcao desejada: ";
		cin>>op;
		cout<<"\n";
		selecionarOpcao(op);
	} while(op != 5);
}
