// Dada a temperatura corporal de uma pessoa, informar se ela está com febre (acima de 37 graus) ou sem febre.

#include <stdio.h>
int main(){
	float t;
	printf("Qual a sua temperatura corporal? ");
	scanf("%f", &t);
	if(t>37){
		printf("Voce esta com febre.");
	}
	else{
		printf("Voce nao esta com febre.");
	}
}
