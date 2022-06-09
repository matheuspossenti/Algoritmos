#include <stdio.h>

float calculaMedia(float n1, float n2, float n3, float n4){
	float media;
	media = ((n1 + n2 + n3 + n4) / 4);
	return media;
}

void escreveMedia(float media){
	if (media >= 7){
		printf("O aluno foi aprovado com media: %f\n", media);
	} else {
		printf("O aluno foi reprovado com media: %f\n", media);
	}
}

int main(){
	int i;
	float n1, n2, n3, n4, media;
	
	for(i=0;i<50;i++){
		printf("Qual a nota 1: ");
		scanf("%f", &n1);
		printf("Qual a nota 2: ");
		scanf("%f", &n2);
		printf("Qual a nota 3: ");
		scanf("%f", &n3);
		printf("Qual a nota 4: ");
		scanf("%f", &n4);
		
		media = calculaMedia(n1, n2, n3, n4);
		
		escreveMedia(media);
	}
}
