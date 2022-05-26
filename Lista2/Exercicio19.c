#include <stdio.h>

int main()
{
    int i, contReprovado = 0, contAprovado = 0;
    float n1, n2, media, mediaGeral = 0;

    for (i = 0; i < 6; i++)
    {
        printf("Informe a nota 1\n");
        scanf("%f", &n1);

        printf("Informe a nota 2\n");
        scanf("%f", &n2);
        media = (n1 + n2) / 2;
        mediaGeral = mediaGeral + media;

        printf("A media do aluno eh: %f\n", media);
        if (media >= 7)
        {
            printf("O aluno foi aprovado!\n");
            contAprovado++;
        }
        else if (media < 7 && media > 5)
        {
            printf("O aluno esta em recuperacao\n");
        }
        else
        {
            printf("O aluno foi reprovado!\n");
            contReprovado++;
        }
    }

    printf("Foram aprovados %i alunos e reprovados %i alunos. A media geral foi: %f", contAprovado, contReprovado, media);

    return 0;
}
