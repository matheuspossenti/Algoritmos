#include <stdio.h>

int main(){
	int n, cont = 1;
	float e = 1;
	
	printf("Informe o valor de N: ");
	scanf("%i", &n);
	
	while(cont <= n){
		e = e + (1. / cont);
		cont++;
	}
	
	printf("%.2f", e);
}
