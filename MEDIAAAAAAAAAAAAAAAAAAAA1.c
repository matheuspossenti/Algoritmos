#include <stdio.h>

int main(){
	int cpf, dep, salMinCpf;
	float imp, renda, salMin, desc;
	
	printf("Informe seu CPF: ");
	scanf("%i", &cpf);
	printf("Informe o numero de dependentes: ");
	scanf("%i", &dep);
	printf("Informe sua renda mensal: ");
	scanf("%f", &renda);
	printf("Informe o valor do salario minimo: ");
	scanf("%f", &salMin);
	
	switch (dep){
		case 1:
			desc = salMin * .05;
		break;
		case 2:
			desc = salMin * .10;
		break;
		case 3:
			desc = salMin * .15;
		break;
		default:
			desc = salMin * .15;
		break;
	}
	
	salMinCpf = renda / salMin;
	
	switch (salMinCpf){
		case 1:
			imp = 0;
		break;
		case 2:
			imp = renda * .05;
		break;
		case 3 ... 4:
			imp = renda * .10;
		break;
		case 5 ... 7:
			imp = renda * .15;
		break;
		default:
			imp = renda * .2;
		break;
	}
	
	if(imp != 0){
		imp = imp - desc;
	}
	
	printf("O CPF: %i, tera um imposto de: %f", cpf, imp);
}
