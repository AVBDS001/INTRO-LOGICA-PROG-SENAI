#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;


int main() {
	double a, b, c;
	cout << "Insira o valor de a: " << endl;
	cin >> a;
	
	cout << "Insira o valor de b: " << endl;
	cin >> b;
	
	cout << "Insira o valor de c: " << endl;
	cin >> c;
	
	//Efetuando as operações com a equação do segundo grau
	double delta = (b * b) - 4 * a * c;
	double r1 = ((- b) + (sqrt(delta))) / 2 * a;
	double r2 = ((- b) - (sqrt(delta))) / 2 * a;
	
	
	//condições para a validade do resultado
	if (delta < 0) {
		cout << "NAO TEM RAIZ NOS NUMEROS REAIS" << endl;
	}
	else if ( delta == 0) {
		cout << "POSSUI APENAS UMA RAIZ" << endl;
		cout << "RESULTADO X1 = " << r1 << endl;
		cout << "RESULTADO X2 = " << r2 << endl;
	}
	else {
		cout << "RESULTADO X1 = " << r1 << endl;
		cout << "RESULTADO X2 = " << r2 << endl;
	}	
}
