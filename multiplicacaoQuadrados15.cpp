#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int n = 15;
	for(int i = 15; i >= 15 && i < 200; i++) {
		int result = n * i;
		cout << result << endl;
		n++;
	}
	return 0;
}
