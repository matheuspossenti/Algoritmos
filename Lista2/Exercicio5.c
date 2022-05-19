#include <stdio.h>
#include <locale.h>

int main (){
    int n,i;
    float e,fat;
    
    fat=1;
    e=1;
    printf("Informe o numero limite:\n");
    scanf("%d", &n);
    
    printf("E = 1 + ");
    for(i=1;i<=n;i++){
        fat *= i;
        e += 1/(float)fat;
        printf("1/%d! + ",i);
    }
    printf("\n resultado= %f",e);
   
    return 0;
}
