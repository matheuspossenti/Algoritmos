/*Ler do teclado 12 números inteiros e armazená-los em um vetor N. 
Em seguida, copiar os elementos pares divisíveis por 3 para o vetor X e os ímpares divisíveis por 5 para o vetor Y.*/

#include <stdio.h>
#define MAX 12

int main(){
	int n[MAX], x[MAX], y[MAX],i, ix, iy;
	
	for(i=0; i < MAX; i++){
		printf("%i, ", &n[i]);
	}
	
	for (i=0; i < MAX; i++){
		if (n[i] % 2 == 0 && n[i] % 3 == 0){
			x[ix] = n[i];
			ix++;
		} else if (n[i] % 2 != 0 && n[i] % 5 == 0){
			y[iy] = n[i];
			iy++;
		}
	}

	printf("Conteudo do vetor N: ");
	for (i=0; i < MAX; i++){
		printf("%i, ", n[i]);
	}
}
