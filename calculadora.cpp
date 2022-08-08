#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x, y;
	int escolha;
	
	cout << "Digite o valor do primeiro numero: \n";
	cin >> x;
	
	cout << "digite o valor do segundo numero: \n";
	cin >> y;
	
	char resposta = 'N';
	while (resposta != 'S') {
		if ( x <= 0 || y <= 0) {
			cout << "VALOR INVALIDO !!! \n";
		}
		else {
			cout << "MENU \n";
			cout << "Digite 1 - SOMAR \n";
			cout << "Digite 2 - SUBTRACAO \n";
			cout << "Digite 3 - DIVISAO \n";
			cout << "Digite 4 - MULTIPLICACAO \n";
			cout << "Digite 5 - POTENCIACAO \n";
			cout << "Digite um numero para operacao desejada: \n";
			
			cin >> escolha;
			
			switch(escolha) {
				case 1: {
					double soma = x + y;
					cout << "RESULTADO: " << soma << endl;
					break;
				}
				case 2: {
					double subtracao = x - y;
					cout << "RESULTADO: " << subtracao << endl;
					break;
				}
				case 3: {
					double divisao = x / y;
					cout << "RESULTADO: " << divisao << endl;
					break;
				}
				case 4: {
					double multiplicacao = x * y;
					cout << "RESULTADO: " << multiplicacao << endl;
					break;
				}
				case 5: {
					double potenciacao = pow(x, y);
					cout << "RESULTADO: " << potenciacao << endl;
					break;
				}
			}
			
		}
		cout << "DESEJA SAIR DO PROGRAMA (S --> SIM / N --> NAO)";
		cin >> resposta;
	}
		
	return 0;
}
