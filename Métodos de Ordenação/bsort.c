#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

//void bsort(int v[], int n){
//	int i,j;
//	for(i=1; i<n; i++){
//		for(j=0; j<n-i; j++){
//			if(v[j] > v[j+1]){
//				troca(&v[j], &v[j+1]);
//			}
//		}
//	}
//}

void bsort(int v[], int n){
	int i,j;
	for(i=1; i<n; i++){//fases
		printf("Estou na fase %d\n", i); getch();
		printVetor(v,n); //passo a passo 
		for(j=0; j<n-i; j++){//comparações
			printf("%d > %d\n", v[j], v[j+1]); getch();
			comp++;
			if(v[j] > v[j+1]){
				printf("Trocando %d com %d", v[j], v[j+1]); 
				troca(&v[j], &v[j+1]);
				printVetor(v,n); getch();
			}
		}
	}
}

int main(){
	int *vet, n;
	printf("Tamanho do vetor:\n ");
	scanf("%d", &n);
	vet = malloc(sizeof(int)*n);
	geraVet(vet,n);
	printVetor(vet,n);
	bsort(vet,n);
	printf("Vetor ordenado!\n");
	printVetor(vet,n);
}
