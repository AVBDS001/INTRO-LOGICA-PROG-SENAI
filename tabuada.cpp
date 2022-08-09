#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int n;
	cout << "DIGITE O NUMERO QUE VOCE QUER A TABUADA: " << endl;
	cin >> n;
	cout << endl;
	
	for(int i = 0; i <= 10; i++) {
		int result = n * i;
		cout << n << " X " << i << " = " << result << endl;
	}
	return 0;
}
