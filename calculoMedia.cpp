#include <iostream>

using namespace std;

int main() {
	double n1, n2, n3, n4;
	
	cout << "INSIRA O VALOR DA PRIMEIRA NOTA: " << endl;
	cin >> n1;
	
	cout << "INSIRA O VALOR DA SEGUNDA NOTA: " << endl;
	cin >> n2;
	
	cout << "INSIRA O VALOR DA TERCEIRA NOTA: " << endl;
	cin >> n3;
	
	cout << "INSIRA O VALOR DA QUARTA NOTA: " << endl;
	cin >> n4;
	
	double media = (n1 + n2 + n3 + n4) / 4;
	cout << "VALOR DA MEDIA: " << media << endl;
	
}
