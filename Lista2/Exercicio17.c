/*Faça um programa que calcule o salário líquido dos funcionários de uma empresa. O salário líquido é composto por descontos e adicionais, seguindo as seguintes regras:
Descontos:
Salário bruto < 800,00 – não realizar nenhum desconto;
800,00 <= Salário bruto <=1600,00 – descontar 8% de Imposto de Renda e 5% de encargos.
Salário bruto > 1600,00 – descontar 15% de Imposto de Renda e 7% de encargos.
Adicionais:
Caso o funcionário tenha trabalhado mais de 160 horas no mês, divida o seu salário bruto por 160 (representa horas trabalhadas) e calcule 50% de adicional nas horas que excederem a 160.
O usuário deverá digitar o salário bruto e o número de horas trabalhadas no mês de cada funcionário, e deverá receber como resultado
 o salário líquido. Para finalizar o programa o usuário deverá digitar 0 no salário bruto, ao finalizar o programa exibir o total geral dos salários líquidos.
*/

#include <stdio.h>

int main(){
	int hrsTrab, hrsExtra;
	float salBruto, salLiq, valorHora, valorHrExtra;
	
	do{
		printf("Digite o salario bruto: \n");
		scanf("%f", &salBruto);
		
		if(salBruto == 0){
			break;
		}
		
		printf("Digite quantas horas foram trabalhadas: \n");
		scanf("%d", &hrsTrab);
		
		if(hrsTrab > 160){
			hrsExtra = hrsTrab - 160;
			valorHora = salBruto/160;
			valorHrExtra = valorHora * .5 * hrsExtra; 
			salBruto = salBruto + valorHrExtra;
		}
		
		if (salBruto < 800){
			salLiq = salBruto;
		} else if (salBruto >= 800 && salBruto <= 1600){
			salLiq = salBruto * 0.8;
		} else if (salBruto > 1600){
			salLiq = salBruto * 0.78;
		}
		
		printf("O salario liquido eh: R$ %f \n", salLiq);
		
	}while(salBruto != 0);
	
	return 0;
}
