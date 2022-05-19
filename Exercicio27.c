#include <stdio.h>

int main(){
	char nome[50];
	float sal, salTotal, perc, reaj;
	
	printf("Informe seu nome: ");
	scanf("%[^\n]", nome);
	printf("Informe o seu salario: ");
	scanf("%f", &sal);
	
	if (sal <= 300){
		perc = .1;
	} else if (sal <= 600){
		perc = .11;
	} else if (sal <= 900){
		perc = .12;
	} else if (sal <= 1500){
		perc = .06;
	} else if (sal <= 2000){
		perc = .03;
	}
	
	reaj = perc * 100;
	salTotal = sal + sal * perc;
	
	if(perc > 0){
		printf("O salario de %s, teve um reajuste de %f%, e foi de R$ %f, para R$ %f", nome, reaj, sal, salTotal);
	} else {
		printf("Nao teve aumento");
	}

	return 0;
}
