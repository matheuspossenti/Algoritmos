/*Escreva um algoritmo que lê uma matriz M(5,5) e calcula as somas:
da linha 4 de M.
da coluna 2 de M.
da diagonal principal.
da diagonal secundária.
de todos os elementos da matriz.
Escreva estas somas e a matriz.
*/

#include <stdio.h>
#define TAM 5

int carregaMatriz(int m[][TAM])
{
    int i, j, total = 0;
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            printf("Digite o valor para m[%d][%d] \n", i, j);
            scanf("%d", &m[i][j]);
            total += m[i][j];
        }
    }

    return total;
}

void escreverMatriz(int m[][TAM])
{
    int i, j;
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

int linha4(int m[][TAM])
{
    int i, j, line4 = 0;
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if (i == 4)
            {
                line4 += m[i][j];
            }
        }
    }
    return line4;
}

int coluna2(int m[][TAM])
{
    int i, j, col2 = 0;
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if (j == 2)
            {
                col2 += m[i][j];
            }
        }
    }
    return col2;
}

int diagonalPrincipal(int m[][TAM])
{
    int i, j, diagP = 0;
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if (j == i)
            {
                diagP += m[i][j];
            }
        }
    }
    return diagP;
}

int diagonalSecundaria(int m[][TAM])
{
    int i, j, diagSec = 0;
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if (j + i == 4)
            {
                diagSec += m[i][j];
            }
        }
    }
    return diagSec;
}

int main()
{
    int m[TAM][TAM], line4, col2, diagP, diagSec;

    carregaMatriz(m);

    line4 = linha4(m);
    col2 = coluna2(m);
    diagP = diagonalPrincipal(m);
    diagSec = diagonalSecundaria(m);

    printf("Soma da Linha 4: %d \n", line4);
    printf("Soma da Coluna 2: %d \n", col2);
    printf("Soma da Diagonal Principal: %d \n", diagP);
    printf("Soma da Diagonal Secundaria: %d \n", diagSec);
    escreverMatriz(m);

    return 0;
}