#include <stdio.h>

int main(){
	int n, cont = 1, a;
	float e = 1, fat = 1;
	
	printf("Informe o valor de N: ");
	scanf("%i", &n);
	while(cont <= n){
		fat=1;
		for(a=cont; a > 0; a--){
			fat = fat * a;
			printf("%i - %f: %i\n", cont, fat, a);
		}
		e = e + (1. / fat);
		cont++;
	}
	
	printf("%.2f", e);
}
