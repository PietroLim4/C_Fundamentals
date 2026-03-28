// Fazer um algoritmo que calcule o dobro de um número (n) dado pelo usuário. 

#include <stdio.h>
int main(){
	int n, resp;
	printf("Digite um numero: ");
	scanf("%d", &n);
	resp = n + n;
	printf("O dobro de %d e: %d", n, resp);
}
