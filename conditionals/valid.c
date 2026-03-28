// Dada uma nota, verificar se ela é válida, ou seja, se ela estiver entre 0 e 10 (inclusive) ela é uma “Nota válida”, senão “Nota inválida”.

#include <stdio.h>
int main(){
	float n;
	printf("Digite um numero: ");
	scanf("%f", &n);
	if(n >= 0 & n <= 10){
		printf("Nota valida");
	}
	else{
		printf("Nota invalida.");
	}
}
