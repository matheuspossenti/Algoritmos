#include <stdio.h>

int main(){
	float joao, ze;
	int anos = 0;
	
	joao = 1.50;
	ze = 1.10;
	
	while (ze <= joao){
		ze = ze + 0.03;
		joao = joao + 0.02;
		anos++;
	}
	
	printf("Serao necessarios %i anos para Ze ficar maior que Joao!", anos);
}
