// Fazer um algoritmo que calcule a média de 4 números dados pelo usuário. 

#include <stdio.h>
int main(){
	int n1, n2, n3, n4;
	float media;
	printf("Digite um numero: ");
	scanf("%d", &n1);
	printf("Digite um segundo numero: ");
	scanf("%d", &n2);
	printf("Digite um terceiro numero: ");
	scanf("%d", &n3);
	printf("Digite um quarto numero: ");
	scanf("%d", &n4);
	media = (n1 + n2 + n3 + n4) / 4.0;
	printf("A media desses quatro numeros é: %.2f", media);
}
