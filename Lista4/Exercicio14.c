#include <stdio.h>
#define TAM 10

int main(){
    int i, j;
    char respostas[TAM][TAM], gabarito[TAM];
    int resultado[TAM];

    for (i = 0; i < TAM; i++)
    {
        resultado[i] = 0;
    }

    for (i = 0; i < TAM; i++)
    {
        printf("Quais foram as respostas do aluno %d: \n", i + 1);
        for (j = 0; j < TAM; j++)
        {
            printf("Questao %d/%d (a, b, c ou d) \n", j + 1, TAM);
            scanf("%c", &respostas[i][j]);
            getchar();
        }
    }
    for (i = 0; i < TAM; i++)
    {
        printf("Qual gabarito da questao %d\n", i + 1);
        scanf("%c", &gabarito[i]);
        getchar();
    }
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if (respostas[i][j] == gabarito[i])
            {
                resultado[i]++;
            }
        }
    }
    printf("Resultado:\n");
    for (i = 0; i < TAM; i++)
    {
        printf("Aluno %d: %d pontos\n", i, resultado[i]);
    }
    return 0;
}
