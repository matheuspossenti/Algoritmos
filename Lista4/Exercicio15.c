#include <stdio.h>
#define TAM 3

int main()
{
    char origem, destino;
    int i, j, tabela[7][7] = {{0, 2, 11, 6, 15, 11, 1}, {2, 0, 7, 12, 4, 2, 15}, {11, 7, 0, 11, 8, 3, 13}, {6, 12, 11, 0, 10, 2, 1}, {15, 4, 8, 10, 0, 5, 13}, {11, 2, 3, 2, 5, 0, 14}, {1, 15, 13, 1, 13, 14, 0}};

    do
    {
        printf("Qual cidade de origem(a,b,c,d,e,f ou g) \n");
        scanf("%c", &origem);
        getchar();

        printf("Qual cidade de destino(a,b,c,d,e,f ou g) \n");
        scanf("%c", &destino);
        getchar();

        if (origem != destino)
        {
            switch (origem)
            {
            case 'a':
                i = 0;
                break;
            case 'b':
                i = 1;
                break;
            case 'c':
                i = 2;
                break;
            case 'd':
                i = 3;
                break;
            case 'e':
                i = 4;
                break;
            case 'f':
                i = 5;
                break;
            case 'g':
                i = 6;
                break;
            default:
                printf("Invalido\n");
                i = -1;
                break;
            }
            switch (destino)
            {
            case 'a':
                j = 0;
                break;
            case 'b':
                j = 1;
                break;
            case 'c':
                j = 2;
                break;
            case 'd':
                j = 3;
                break;
            case 'e':
                j = 4;
                break;
            case 'f':
                j = 5;
                break;
            case 'g':
                j = 6;
                break;
            default:
                printf("Invalido\n");
                j = -1;
                break;
            }
            if (i >= 0 && j >= 0)
                printf("%d horas! \n", tabela[i][j]);
        }
        else
        {
            printf("Acabou!");
            break;
        }

    } while (origem != destino);

    return 0;
}
