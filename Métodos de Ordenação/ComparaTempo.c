#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(){
	int *vetBs, *vetSs, n;
	float ini, fim, tempo;
	printf("Tamanho do vetor:\n ");
	scanf("%d", &n);
	vetBs = malloc(sizeof(int)*n);
	vetSs = malloc(sizeof(int)*n);
	geraVet(vetBs,n);
	//Copia para o vetSs
	//printVetor(vet,n);
	ini = clock();
	bsort(vet,n);
	fim = clock();
	tempo = (fim - ini) / 1000;
	printf("Tempo(s):%.4f\n", tempo);
	printf("Vetor ordenado!\n");
	//printVetor(vet,n);
}
