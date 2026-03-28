// Fazer um algoritmo que calcule o cubo de um numero (n) dado pelo usuário. 

#include <stdio.h>
int main(){
	int n, resp;
	printf("Digite um numero: ");
	scanf("%d", &n);
	resp = n * n * n;
	printf("O cubo desse numero e: %d", resp);
}
