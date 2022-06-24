#include <stdio.h>
#define TAM 5

int main(){
    int m[TAM][TAM], i, j, line4=0, col2=0, diagP=0, diagSec=0, total=0;

    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            printf("Digite o valor para m[%d][%d] \n",i,j);
            scanf("%d",&m[i][j]);
            total+=m[i][j];
        }
    }

    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            if(i==4){
                line4 += m[i][j];
            }
            if(j==2){
                col2 += m[i][j];
            }
            if(j==i){
                diagP += m[i][j];
            }
            if(j+i==4){
                diagSec += m[i][j];
            }
        }
    }

    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    printf("Soma da Linha 4: %d \n", line4);
    printf("Soma da Coluna 2: %d \n", col2);
    printf("Soma da Diagonal Principal: %d \n", diagP);
    printf("Soma da Diagonal Secundaria: %d \n", diagSec);

    
    return 0;
}