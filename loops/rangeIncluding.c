// Solicitar ao usuário dois números e exibir na tela os números do intervalo, incluindo os números digitados

#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, f;
	printf("Número inicial: ");
	scanf("%d", &i);
	printf("Número final..: ");
	scanf("%d", &f);
	while (i<=f){
		printf("%d ", i);
		i++;
	}
}
