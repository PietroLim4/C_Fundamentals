//Fazer um algoritmo que calcule o quadrado de um numero (n) dado pelo usuário.

#include <stdio.h>
int main(){
	int n, resp;
	printf("Digite um numero: ");
	scanf("%d", &n);
	resp = n * n;
	printf("O quadrado de %d e: %d", n, resp);
}
