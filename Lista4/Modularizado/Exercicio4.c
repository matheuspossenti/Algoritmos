/*
Ler do teclado 12 números inteiros e armazená-los em um vetor N.
Em seguida, copiar os elementos pares divisíveis por 3 para o
vetor X e os ímpares divisíveis por 5 para o vetor Y.
*/

#include <stdio.h>
#define TAM 12

void carregaVetor(int N[])
{
    int i;
    for (i = 0; i < TAM; i++)
    {
        printf("Digite o valor de N[%i]: ", i);
        scanf("%i", &N[i]);
    }
}

void escreveVetor(int N[])
{
    int i;
    for (i = 0; i < TAM; i++)
    {
        printf("N[%i]: %i\n", i, N[i]);
    }
}

void elementosParesDiv3(int N[])
{
    int i, contX = 0, X[contX];
    for (i = 0; i < TAM; i++)
    {
        if ((N[i] % 2 == 0) && (N[i] % 3 == 0))
        {
            X[contX] = N[i];
            contX++;
        }
    }

    printf("\nOs pares divisiveis por 3 do vetor N sao:\n");
    for (i = 0; i < contX; i++)
    {
        printf("\t%i\n", X[i]);
    }
}

void elementosImparesDiv5(int N[])
{
    int i, contY = 0, Y[contY];
    for (i = 0; i < TAM; i++)
    {
        if ((N[i] % 2 != 0) && (N[i] % 5 == 0))
        {
            Y[contY] = N[i];
            contY++;
        }
    }

    printf("\nOs impares divisiveis por 5 do vetor N sao:\n");
    for (i = 0; i < contY; i++)
    {
        printf("\t%i\n", Y[i]);
    }
}

int main()
{
    int N[TAM];

    carregaVetor(N);

    escreveVetor(N);

    elementosParesDiv3(N);

    elementosImparesDiv5(N);
}