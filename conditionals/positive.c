// Dado um número pelo usuário, verificar se ele é positivo, exibindo a mensagem “O numero é positivo” ou “O numero não é positivo”

#include <stdio.h>
int main(){
	float n;
	printf("Digite um numero: ");
	scanf("%f", &n);
	if(n>0){
		printf("Esse numero e positivo.");
	}
	else{
		printf("Esse numero e negativo.");
	}
}
