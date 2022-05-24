/*Fa�a um programa que calcule o sal�rio l�quido dos funcion�rios de uma empresa. O sal�rio l�quido � composto por descontos e adicionais, seguindo as seguintes regras:
Descontos:
Sal�rio bruto < 800,00 � n�o realizar nenhum desconto;
800,00 <= Sal�rio bruto <=1600,00 � descontar 8% de Imposto de Renda e 5% de encargos.
Sal�rio bruto > 1600,00 � descontar 15% de Imposto de Renda e 7% de encargos.
Adicionais:
Caso o funcion�rio tenha trabalhado mais de 160 horas no m�s, divida o seu sal�rio bruto por 160 (representa horas trabalhadas) e calcule 50% de adicional nas horas que excederem a 160.
O usu�rio dever� digitar o sal�rio bruto e o n�mero de horas trabalhadas no m�s de cada funcion�rio, e dever� receber como resultado
 o sal�rio l�quido. Para finalizar o programa o usu�rio dever� digitar 0 no sal�rio bruto, ao finalizar o programa exibir o total geral dos sal�rios l�quidos.
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
