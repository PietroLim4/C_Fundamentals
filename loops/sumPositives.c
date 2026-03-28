// Aceitar números do usuário até receber um número negativo. Exibir a soma dos números e quantos foram digitados.

#include <stdio.h>
int main(){
	int n=0, t=0, c=0;
	while(n>=0){
		t=t+n;
		printf("Digite um valor: ");
		scanf("%d", &n);
		c++;
	}
	c=c-1;
	printf("Total: %d\nNúmero de positivos: %d", t, c);	
}
