#include<iostream>
#include<stdio.h>

using namespace std;
double totalA, totalB, totalC = 0;
void menuApuracao() {
	cout<<"Total de votos em A: "<<totalA;
	cout<<"\n";
	
	cout<<"Total de votos em B: "<<totalB;
	cout<<"\n";
	
	cout<<"Total de votos em C: "<<totalC;
	cout<<"\n";
}

void revelarVencedor () {
	if (totalA > totalB && totalA > totalC) {
		cout<<"O candidato A venceu a eleicao"<<endl;
	}
	else if (totalB > totalA && totalB > totalC){
		cout<<"O candidato B venceu a eleicao"<<endl;
	}
	else if (totalC > totalA && totalC > totalB) {
		cout<<"O candidato C venceu a eleicao"<<endl;
	}
}


int main() {
	
	//Computando os votos do candidato A
	double qtdVotosA[200];
	for (int i = 0; i <= sizeof(qtdVotosA); i++) {
		totalA = i;
	}
	
	//Computando os votos do candidato B
	double qtdVotosB[500];
	for (int i = 0; i <= sizeof(qtdVotosB); i++) {
		totalB = i;
	}
	
	//Computando os votos do candidato C
	double qtdVotosC[100];
	for (int i = 0; i <= sizeof(qtdVotosC); i++) {
		totalC = i;
	}
	
	menuApuracao();
	revelarVencedor();
}
