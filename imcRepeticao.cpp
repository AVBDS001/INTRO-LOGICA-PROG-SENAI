#include<iostream>
#include<stdio.h>
using namespace std;


double peso, altura, imc;
string nome;
char resposta, sexo;
double sum = 0;


void menu() {
	cout<<"Nome: "<<nome<<endl;
	cout<<"Sexo: "<<sexo<<endl;
	cout<<"Peso: "<<peso<<endl;
	cout<<"Altura: "<<altura<<endl;
	cout<<"IMC: "<<imc<<endl;
}


calculaIMC(double peso, double altura) {
	return peso / (altura * altura);
}


somaImc(double imc) {
	return sum += imc;
}
	
string classificacao(double imc) {
	switch (sexo) {
		case 'M':
			if (imc < 20.0) {
				return "ABAIXO DO NORMAL";
			}
			else if (imc >= 20.0 && imc < 24.9) {
				return "NORMAL";
			}
			else if (imc >= 25.0 && imc < 29.9) {
				return "OBESIDADE LEVE";
			}
			else if (imc >= 30.0 && imc < 39.9) {
				return "OBESIDADE MODERADA";
			}
			else if(imc >= 43.0) {
				return "OBESIDADE MORBIDA";
			}
			break;
		case 'F':
			if (imc < 19.0) {
				return "ABAIXO DO NORMAL";
			}
			else if (imc >= 19.0 && imc < 23.9) {
				return "NORMAL";
			}
			else if (imc >= 24.0 && imc < 28.9) {
				return "OBESIDADE LEVE";
			}
			else if (imc >= 29.0 && imc < 38.9) {
				return "OBESIDADE MODERADA";
			}
			else if (imc >= 39.0) {
				return "OBESIDADE MORBIDA";
			}
			break;
	}
}

int main() {
	resposta = 'N';
	
	while (resposta != 'S') {
		cout<<"Insira o nome do paciente: ";
		cin>>nome;
		cout<<"\n";
		
		//teste para o sexo
		while (sexo != 'M' && sexo != 'F') {
			cout<<"Insira o sexo do paciente: (M --> Masculino/ F --> Feminino): ";
			cin>>sexo;	
			
			cout<<"\n";
			
			if (sexo != 'M' && sexo != 'F') {
			cout<<"ERRO: ENTRADA INVALIDA PARA O SEXO DO PACIENTE";
			cout<<"\n";	
			}
		}	
		cout<<"\n";
		
		cout<<"Insira o peso do paciente em KG: ";
		cin>>peso;
		cout<<"\n";
		
		//teste para o peso
		while (peso <= 0.0 || peso >= 150.0) {
			
			if (peso <= 0.0 || peso >= 150.0) {
			cout<<"ERRO: ENTRADA INVALIDA PARA O PESO DO PACIENTE";
			cout<<"\n";
			}
			cout<<"Insira o peso do paciente em KG: ";
			cin>>peso;
			cout<<"\n";	
		}
		
		
		cout<<"Insira a altura do paciente em metros: ";
		cin>>altura;
		cout<<"\n";
		
		//teste para altura
		while (altura <= 0.0 || altura >= 2.50) {
			if (altura <= 0.0 || altura >= 2.50) {
				cout<<"ERRO: ENTRADA INVALIDA PARA A ALTURA DO PACIENTE";
				cout<<"\n";
			}
			cout<<"Insira a altura do paciente em metros: ";
			cin>>altura;
			cout<<"\n";	
		}
		
		imc = calculaIMC(peso, altura);
		menu();
		
		cout<<"\n";
		cout<<classificacao(imc);
		cout<<"\n";
		
		cout<<"\n";
		cout<<"SOMA IMC: "<<somaImc(imc);
		cout<<"\n";
		
		cout<<"Deseja sair do programa (Digite S --> SIM / DIGITE N --> NAO): ";
		cin>>resposta;
		cout<<"\n";	
	}
	
}
