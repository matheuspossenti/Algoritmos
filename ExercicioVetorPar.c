#include <stdio.h>
#define TAM 5

int main(){
	int vet[TAM], i;
	
	for(i=0; i < TAM; i++){
		printf("Informe o valor de vet[%i]: ", i);
		scanf("%i", &vet[i]);
	}
	
	for(i=0; i < TAM; i++){
		if (vet[i] % 2 == 0){
			printf("%i \n", vet[i]);
		}
	}
}
