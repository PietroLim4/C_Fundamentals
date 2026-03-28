// Dados dois números pelo usuário, exibir o de maior valor.

#include <stdio.h>
int main(){
	float n1, n2;
	printf("Digite um numero: ");
	scanf("%d", &n1);
	printf("Digite outro numero: ");
	scanf("%d", &n2);
	if(n1>=n2){
		printf("%f", n1);
	}
	else{
		printf("%f", n2);
	}
}
