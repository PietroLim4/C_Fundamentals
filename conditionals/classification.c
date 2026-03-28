// Dado um número pelo usuário, verifique se ele é “Positivo”, “Negativo” ou “Nulo”(igual a zero)

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	printf("Digite um n�mero: ");
	scanf("%d", &n);
	if(n > 0){
		printf("O número %d é positivo.", n);
	}
	else{
		if(n<0){
			printf("O número %d é negativo.", n);
		}else{
			printf("O número %d é nulo.", n);
		}
	}
}
