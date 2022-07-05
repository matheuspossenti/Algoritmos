/* 2. Para o controle dos veículos que circulam em uma determinada cidade, a Secretaria dos
Transportes criou o seguinte registro-padrão:
Proprietário: ___________________________________ Combustível: _________________
Modelo: _____________________________________ Cor: __________________________
No. chassi: _______________________ Ano: __________ Placa: _____________________
Em que:
• combustível pode ser álcool, diesel ou gasolina;
• placa possui os três primeiros valores alfabéticos e os quatro restantes numéricos; */

#include <stdio.h>
#include <stdlib.h>
#define QNT 3

typedef struct sVeiculo{
	int chassi, ano;
	char placa[6], nome[30], combustivel[30], modelo[50], cor[50];
} Veiculo;


int main(){
	int i;
	int chassi;
	Veiculo carros[QNT];

	for(i = 0; i < QNT; i++)
	{
	printf("Digite o nome do proprietario:");
	gets(carros[i].nome);

	printf("Digite o combustivel utilizado (Álcool, Diesel ou Gasolina):");
	gets(carros[i].combustivel);
	
	printf("Digite o modelo do carro:");
	gets(carros[i].modelo);

	printf("Digite a cor do carro:");
	gets(carros[i].cor);
	
	printf("Digite o nº do chassi:");
	scanf("%d", &carros[i].chassi);

	printf("Digite o ano do veículo:");
	scanf(" %d", &carros[i].ano);
	getchar(); 

	printf("Digite a placa do veiculo: (Maiusculo)");
	gets(carros[i].placa);

	}

	printf("\nProprietários com veículos a diesel do ano de 1980 ou posterior:\n");
	for(i = 0; i < QNT; i++)
	{

		if(carros[i].ano >= 1980 && carros[i].combustivel == "Diesel")	
		{
		printf("\nNome: %s \n", carros[i].nome);
		}
	}
	printf("\n");	

	printf("\nPlacas que começam com A e terminam com 0, 2, 4 ou 7:");
	for(i = 0; i < QNT; i++)
	{
		if(carros[i].placa[0] == 'A' && carros[i].placa[6] == '0' || carros[i].placa[6] == '2' || carros[i].placa[6] == '4' || carros[i].placa[6] == '7')	
		{
		printf("\n\nPlaca: %s ", carros[i].placa);
		}
	}
	printf("\n");		

/* d) Elabore um algoritmo que liste o modelo e a cor dos veículos cujas placas possuem
como segunda letra uma vogal e cuja soma dos valores numéricos fornece um
número par. */

	printf("\nPlacas que a segunda letra eh uma vogal e a soma dos numeros é par: ");
	for(i = 0; i < QNT; i++){
		if(carros[i].placa[1] == 'A' || carros[i].placa[1] == 'E'|| carros[i].placa[1] == 'I'|| carros[i].placa[1] == 'O'|| carros[i].placa[1] == 'U'){
			if((carros[i].placa[3] + carros[i].placa[4] + carros[i].placa[5] + carros[i].placa[6]) % 2 == 0){
				printf("\n\nModelo: %s", carros[i].modelo);
				printf("\nCor: %s", carros[i].cor);
				printf("\nPlaca: %s", carros[i].placa);
			}
		}
	}
	printf("\n");
	

/* e) Construa um algoritmo que permita a troca de proprietário com o fornecimento do
número do chassi apenas para carros com placas que não possuem nenhum dígito
igual a zero. */
	
	for(i = 0; i < QNT; i++){
		if(carros[i].placa[3] == 0 || carros[i].placa[4] == 0 || carros[i].placa[5] == 0 || carros[i].placa[6] == 0){
			printf("Gostaria de trocar o proprietário? Se sim digite o numero do chassi");
			scanf("%i", &chassi);
			if(chassi == carros[i].chassi){
				
			}
		}
	}

return 0;
}
