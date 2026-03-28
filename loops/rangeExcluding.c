// Solicitar ao usuário dois números e exibir na tela os números do intervalo, excluindo os números digitados.

#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, f;
	printf("Número inicial: ");
	scanf("%d", &i);
	printf("Número final..: ");
	scanf("%d", &f);
	while (i<f-1){
		i++;
		printf("%d ", i);
	}
}
