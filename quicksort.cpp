//SALVAR ESSA PORRA P N PERDER


#include<iostream>
#include<stdio.h>
using namespace std;


int dividir(int vetor[], int esquerda, int direita) {
    int auxiliar;
    int contador = esquerda;
    for (int i = esquerda + 1; i < direita; i++) {
        if (vetor[i] < vetor[esquerda]) {
            contador++;
            auxiliar = vetor[i];
            vetor[i] = vetor[contador];
            vetor[contador] = auxiliar;
        }
    }
    auxiliar = vetor[esquerda];
    vetor[esquerda] = vetor[contador];
    vetor[contador] = auxiliar;
    return contador;
}

void quickSort(int vetor[], int esquerda, int direita) {
    int posicao;
    if (esquerda < direita) {
        posicao = dividir(vetor, esquerda, direita);
        quickSort(vetor, esquerda, posicao - 1);
        quickSort(vetor, posicao+1, direita);
    }
}

int main() {

    int vetor[] = {1, 3, 7, 5, 9, 0, 2, 4, 6, 8};

    int n = 10;

    quickSort(vetor, 0, n);

    for (int i = 0; i < n; i++) {
        cout<<vetor[i]<<" - ";
    }



    return 0;
}
