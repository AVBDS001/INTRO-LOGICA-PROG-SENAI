#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int a;
	
	cin >> a;
	
	if (a % 2 == 0) {
		cout << "O NUMERO A E PAR";
	}
	if (a % 2 != 0) {
		cout << "O NUMERO A E IMPAR";
	}
}
