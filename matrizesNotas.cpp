#include<iostream>
using namespace std;

int op;
double notas[10][3] = {0};

void menu() {
	cout<<"Menu principal"<<endl;
	cout<<"1 - Adicionar notas"<<endl;
	cout<<"2 - Exibir medias"<<endl;
	cout<<"3 - Exibir aprovados"<<endl;
	cout<<"4 - Exibir reprovados"<<endl;
	cout<<"5 - Sair"<<endl;
}

void addNotas() {
	for (int i = 0; i < 10; i++) {
		cout<<"Aluno da linha: "<<i+1<<endl;
		for (int j = 0; j < 3; j++) {
			if (notas[i][j] == 0) {
				cout<<"Informe a AV"<<j+1<<" "<<endl;
				cin>>notas[i][j];
			}
		}
	}
}

void getMedias() {
	double media = 0;
	for (int i = 0; i < 10; i++) {
		media = 0;
		cout<<"Media do aluno: "<<i+1<<endl;
		for (int j = 0; j < 3; j ++) {
			media += notas[i][j];
		}
		media = media / 3.0;
		cout<<" "<<media<<endl;
	}
}

void getAprovados() {
	double media = 0;
	for (int i = 0; i < 10; i++) {
		media = 0;
		cout<<"Aluno "<<i+1<<" Aprovado com media: ";
		for (int j = 0; j < 3; j++) {
			media += notas[i][j];
		}
		media = media / 3.0;
		if (media >= 7) {
			cout <<"Aluno aprovado";
		}
	}
}

void getReprovados() {
	double media = 0;
	for (int i = 0; i < 10; i++) {
		media = 0;
		cout<<"Aluno "<<i+1<<" Aprovado com media: ";
		for (int j = 0; j < 3; j++) {
			media += notas[i][j];
		}
		media = media / 3.0;
		if (media < 7) {
			cout <<"Aluno reprovado";
		}
	}
}

void selecionarOpcao(int op) {
	switch(op) {
		case 1:
			addNotas();
			break;
		case 2:
			getMedias();
			break;
		case 3:
			getAprovados();
			break;
		case 4:
			getReprovados();
			break;
	}
}

int main() {	
	do {
		menu();
		cout<<"Informe a opcao: ";
		cin>>op;
		cout<<"\n";
		selecionarOpcao(op);
	}while(op != 5);
}#include<iostream>
using namespace std;

int op;
double notas[10][3] = {0};

void menu() {
	cout<<"Menu principal"<<endl;
	cout<<"1 - Adicionar notas"<<endl;
	cout<<"2 - Exibir medias"<<endl;
	cout<<"3 - Exibir aprovados"<<endl;
	cout<<"4 - Exibir reprovados"<<endl;
	cout<<"5 - Sair"<<endl;
}

void addNotas() {
	for (int i = 0; i < 10; i++) {
		cout<<"Aluno da linha: "<<i+1<<endl;
		for (int j = 0; j < 3; j++) {
			if (notas[i][j] == 0) {
				cout<<"Informe a AV"<<j+1<<" "<<endl;
				cin>>notas[i][j];
			}
		}
	}
}

void getMedias() {
	double media = 0;
	for (int i = 0; i < 10; i++) {
		media = 0;
		cout<<"Media do aluno: "<<i+1<<endl;
		for (int j = 0; j < 3; j ++) {
			media += notas[i][j];
		}
		media = media / 3.0;
		cout<<" "<<media<<endl;
	}
}

void getAprovados() {
	double media = 0;
	for (int i = 0; i < 10; i++) {
		media = 0;
		cout<<"Aluno "<<i+1<<" Aprovado com media: ";
		for (int j = 0; j < 3; j++) {
			media += notas[i][j];
		}
		media = media / 3.0;
		if (media >= 7) {
			cout <<"Aluno aprovado";
		}
	}
}

void getReprovados() {
	double media = 0;
	for (int i = 0; i < 10; i++) {
		media = 0;
		cout<<"Aluno "<<i+1<<" Aprovado com media: ";
		for (int j = 0; j < 3; j++) {
			media += notas[i][j];
		}
		media = media / 3.0;
		if (media < 7) {
			cout <<"Aluno reprovado";
		}
	}
}

void selecionarOpcao(int op) {
	switch(op) {
		case 1:
			addNotas();
			break;
		case 2:
			getMedias();
			break;
		case 3:
			getAprovados();
			break;
		case 4:
			getReprovados();
			break;
	}
}

int main() {	
	do {
		menu();
		cout<<"Informe a opcao: ";
		cin>>op;
		cout<<"\n";
		selecionarOpcao(op);
	}while(op != 5);
}
