/*
Faça um programa em C que leia a idade e a altura de 5 pessoas.
Armazene cada informação no seu respectivo vetor. 
Imprima a idade e a altura na ordem inversa a ordem lida.
*/

#include <stdio.h>
#define TAM 5

int main(){
    int idade[TAM], altura[TAM], i;

    for (i=0;i<TAM;i++){
        printf("Informe a idade da pessoa %i: ", i+1);
        scanf("%i", &idade[i]);
    }
    
    for (i=0;i<TAM;i++){
        printf("Informe a altura da pessoa %i (Em cm): ", i+1);
        scanf("%i", &altura[i]);
    }

    for (i=TAM-1;i>=0;i--){
        printf("\nPessoa %i: Idade: %i | Altura: %i", i+1, idade[i], altura[i]);
    }
    
}