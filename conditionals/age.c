// Dada uma idade pelo usuário, verificar e exibir a mensagem “Você é menor de Idade” ou “Você é maior de Idade”.

#include <stdio.h>
int main(){
	int idade;
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	if(idade >= 18){
		printf("Voce e maior de idade.");
	}
	else{
		printf("Voce e menor de idade.");	
	}
}
