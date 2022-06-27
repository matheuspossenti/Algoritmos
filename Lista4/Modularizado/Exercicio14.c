// Leia uma matriz 10 x 10 que se refere respostas de 10 questões de múltipla escolha, referentes a 10 alunos.
// Leia também um vetor de 10 posições contendo o gabarito de respostas que podem ser a, b, c ou d.
// Seu programa deverá comparar as respostas de cada candidato com o gabarito e emitir um vetor Resultado, contendo a pontuação correspondente.

#include <stdio.h>
#define TAM 5

void limpaResultado(int resultado[])
{
    int i;
    for (i = 0; i < TAM; i++)
    {
        resultado[i] = 0;
    }
}

void carregaRespostas(char respostas[][TAM])
{
    int i, j;
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
}

void carregaGabarito(char gabarito[])
{
    int i;
    for (i = 0; i < TAM; i++)
    {
        printf("Qual gabarito da questao %d\n", i + 1);
        scanf("%c", &gabarito[i]);
        getchar();
    }
}

void comparaRespostas(char respostas[][TAM], char gabarito[], int resultado[])
{
    int i, j;
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
}

int main()
{
    int i, j;
    char respostas[TAM][TAM], gabarito[TAM];
    int resultado[TAM];

    limpaResultado(resultado);
    carregaRespostas(respostas);
    carregaGabarito(gabarito);
    comparaRespostas(respostas, gabarito, resultado);

    printf("Resultado:\n");
    for (i = 0; i < TAM; i++)
    {
        printf("Aluno %d: %d pontos\n", i, resultado[i]);
    }
    return 0;
}
