#include <iostream>

using namespace std;

int main() {
	int a, b, c, d;
	
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	
	//Identificando o maior e o menor valor
	if (a > b && a > c && a > d) {
		cout << "VALOR DE A = " << a << endl;
		cout << "A e o maior valor";
	}
	if (b > a && b > c && b > d) {
		cout << "VALOR DE B = " << b << endl;
		cout << "B e o maior valor";
	}
	if (c > a && c > b && c > d) {
		cout << "VALOR DE C = " << c << endl;
		cout << "C e o maior valor";
	}
	if (d > a && d > b && d > c) {
		cout << "VALOR DE D = " << d << endl;
		cout << "D e o maior valor";
	}
}
