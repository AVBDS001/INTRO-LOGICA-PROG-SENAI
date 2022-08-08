#include <iostream>

using namespace std;
int main() {
	double altura, peso;
	
	cout << "INSIRA O VALOR DA ALTURA DO PACIENTE: "<<endl;
	cin >> altura;
	
	cout << "INSIRA O VALOR DO PESO DO PACIENTE: " <<endl;
	cin >> peso;
	
	double imc = peso / (altura * altura);
	
	if (imc < 18.5) {
		cout << "RESULTADO: "<<imc<<endl;
		cout<<"PESO BAIXO";
	}
	else if (imc >= 18.5 && imc < 24.9) {
		cout <<"RESULTADO: "<<imc<<endl;
		cout<<"PESO NORMAL";
	}
	else if (imc >= 25.0 && imc < 29.9) {
		cout <<"RESULTADO: "<<imc<<endl;
		cout<<"SOBREPESO";
	}
	else if (imc >= 30.0 && imc < 34.9) {
		cout <<"RESULTADO: "<<imc<<endl;
		cout<<"OBESIDADE GRAU 1";
	}
	else if(imc >= 35.0 && imc < 39.9) {
		cout<<"RESULTADO: "<<imc<<endl;
		cout<<"OBESIDADE SEVERA GRAU 2";
	}
	else if (imc > 40) {
		cout<<"RESULTADO: "<<imc<<endl;
		cout<<"OBESIDADE MÓRBIDA GRAU 3";
	}
	
	return 0;
}
