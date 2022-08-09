#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main() {
	
	int sum = 0;
	for(int i = 0; i <= 200; i++) {
		if (i % 4 == 0) {
			cout << i << endl;
		}
	}
	return 0;
}
