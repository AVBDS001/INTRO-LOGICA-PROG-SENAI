#include<iostream>
#include<stdio.h>
using namespace std;

struct Paciente {
	string nome;
	char sexo;
	double altura, peso;
	
};
Paciente paciente[3];
double arrayIMC[3] = {0};

void menu() {
	cout<<"Menu principal"<<endl;
	cout<<"1 - Cadastrar informacoes do paciente (Nome, sexo, altura, peso, imc)"<<endl;
	cout<<"2 - Calcular o IMC de acordo com a tabela em anexo"<<endl;
	cout<<"3 - Exibir o maior IMC"<<endl;
	cout<<"4 - Exibir o menor IMC"<<endl;
	cout<<"5 - Exibir a media dos IMCs"<<endl;
	cout<<"6 - Encerrar o programa"<<endl;
}

int qtd = 0;
void addPaciente() {
	for (int i = 0; i < 3; i ++) {
		cout<<"Informe o nome do paciente "<<i+1<<" : ";
		cin>>paciente[i].nome;
		cout<<"\n";
		
		cout<<"Informe o sexo do paciente "<<i+1<<" (M --> Masculino / F --> Feminino): ";
		cin>>paciente[i].sexo;
		cout<<"\n";
		
		cout<<"Informe a altura do paciente "<<i+1<<" : ";
		cin>>paciente[i].altura;
		cout<<"\n";
		
		cout<<"Informe o peso do paciente "<<i+1<<" : ";
		cin>>paciente[i].peso;
		cout<<"\n";
		
		double imc = paciente[i].peso / (paciente[i].altura * paciente[i].altura);
		//append do imc no vetor imc
		for (int j = 0; j < 3; j++) {
			if (arrayIMC[i] == 0) {
				arrayIMC[i] = imc;
			}
		}
		
		cout<<"IMC do paciente "<<i+1<<" : "<<imc<<endl;	
		qtd++;
	}
}
void classificarIMC() {
	for (int i = 0; i < 3; i++) {
		double imc = paciente[i].peso / (paciente[i].altura * paciente[i].altura);
		switch(paciente[i].sexo) {
			case 'M':
				if (imc < 20.0) {
					cout<<"Paciente "<<i+1<<" seu imc e: "<<imc<<endl;
					cout<<"ABAIXO DO NORMAL"<<endl;
					cout<<"\n";
				}
				else if (imc >= 20.0 && imc <= 24.9) {
					cout<<"Paciente "<<i+1<<" seu imc e: "<<imc<<endl;
					cout<<"NORMAL"<<endl;
					cout<<"\n";
				}
				else if (imc >= 25.0 && imc <= 29.9) {
					cout<<"Paciente "<<i+1<<" seu imc e: "<<imc<<endl;
					cout<<"OBESIDADE LEVE"<<endl;
					cout<<"\n";
				}
				else if (imc >= 30.0 && imc <= 39.9) {
					cout<<"Paciente "<<i+1<<" seu imc e: "<<imc<<endl;
					cout<<"OBESIDADE MOEDERADA"<<endl;
					cout<<"\n";
				}
				else if (imc >= 43.0) {
					cout<<"Paciente "<<i+1<<" seu imc e: "<<imc<<endl;
					cout<<"OBESIDADE MORBIDA"<<endl;
					cout<<"\n";
				}
				break;
						
			case 'F':
				if (imc < 19.0) {
					cout<<"Paciente "<<i+1<<" seu imc e: "<<imc<<endl;
					cout<<"ABAIXO DO NORMAL"<<endl;
					cout<<"\n";
				}
				else if (imc >= 19.0 && imc <= 23.9) {
					cout<<"Paciente "<<i+1<<" seu imc e: "<<imc<<endl;
					cout<<"NORMAL"<<endl;
					cout<<"\n";
				}
				else if (imc >= 24.0 && imc <= 28.9) {
					cout<<"Paciente "<<i+1<<" seu imc e: "<<imc<<endl;
					cout<<"OBESIDADE LEVE"<<endl;
					cout<<"\n";
				}
				else if (imc >= 29.0 && imc <= 38.9) {
					cout<<"Paciente "<<i+1<<" seu imc e: "<<imc<<endl;
					cout<<"OBESIDADE MOEDERADA"<<endl;
					cout<<"\n";
				}
				else if (imc >= 39.0) {
					cout<<"Paciente "<<i+1<<" seu imc e: "<<imc<<endl;
					cout<<"OBESIDADE MORBIDA"<<endl;
					cout<<"\n";
				}
				break;
				
		}
	}
}

void exibirMaiorIMC() {
	for (int i = 0; i < 3; i++) {
		if (arrayIMC[0] < arrayIMC[i]) {
			arrayIMC[0] = arrayIMC[i];
			cout<<"Maior IMC: "<<arrayIMC[i];
			cout<<"\n";
		}
	}
}

void exibirMenorIMC() {
	for (int i = 0; i < 3; i++) {
		if (arrayIMC[0] > arrayIMC[i]) {
			arrayIMC[0] = arrayIMC[i];
			cout<<"Menor IMC: "<<arrayIMC[i];
			cout<<"\n";
		}
	}
}

void exibirMediaIMC() {
	double soma = 0;
	double media = 0;
	for (int i = 0; i < 3; i++) {
		soma += arrayIMC[i];
	}
	media = soma / 3.0;
	cout<<"Media dos IMCs: "<<media;
	cout<<"\n";
}

int op = 0;
void selecionarOpcao(int op) {
	switch(op) {
		case 1:
			addPaciente();	
			break;
		
		case 2:
			classificarIMC();
			break;
		
		case 3:
			exibirMaiorIMC();
			break;
		
		case 4:
			exibirMenorIMC();
			break;
		
		case 5:
			exibirMediaIMC();
			break;	
	}
}

int main() {
	do {
		menu();
		cout<<"Selecione uma opcao: ";
		cin>>op;
		cout<<"\n";
		selecionarOpcao(op);
	}while(op != 6);		
}
