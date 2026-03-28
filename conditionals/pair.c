// Dado um número pelo usuário, verificar se ele é “O número é par” ou “O número é impar”, exibindo sua respectiva mensagem

#include <stdio.h>
int main(){
	int n;
	printf("Digite um numero:");
	scanf("%d", &n);
	if(n%2 == 0){
		printf("Esse numero e par.");
	} 
	else{
		printf("Esse numero e impar.");
	}
}
