#include<iostream>
#include<stdio.h>

using namespace std;

float valor1, valor2, calculo;

void lerValores() {
	cout<<"Informe o primeiro valor"<<endl;
	cin>>valor1;
	cout<<"Informe o segundo valor"<<endl;
	cin>>valor2;
}

float soma(float v1, float v2) {
	return v1 + v2;
}

float subtracao(float v1, float v2) {
	return v1 - v2;
}

float divisao(float v1, float v2) {
	return v1 / v2;
}

float multiplicacao(float v1, float v2) {
	return v1 * v2;
}
int main() {
	int op;
	
	cout<<"Calculadora"<<endl;
	cout<<"1 - SOMAR"<<endl;
	cout<<"2 - SUBTRACAO"<<endl;
	cout<<"3 - DIVISAO"<<endl;
	cout<<"4 - MULTIPLICACAO"<<endl;
	
	cout<<"informe a operacao"<<endl;
	cin>>op;
	
	switch(op) {
		case 1: {
			lerValores();
			calculo = soma(valor1,valor2);
			cout<<calculo<<endl;
			break;
		}
		case 2: {
			lerValores();
			calculo = subtracao(valor1, valor2);
			cout<<calculo<<endl;
			break;
		}
		case 3: {
			lerValores();
			calculo = divisao(valor1, valor2); 
			cout<<calculo<<endl;
			break;
		}
		case 4: {
			lerValores();
			calculo = multiplicacao(valor1, valor2);
			cout<<calculo<<endl;
			break;
		}
	}
}
