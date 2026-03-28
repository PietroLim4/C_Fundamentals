// Solicitar ao usuário dois números, correspondentes as extremidades de um intervalo, e exibir na ordem (crescente ou decrescente) em que ele digitou.

#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, f;
	printf("Digite um número...: ");
	scanf("%d", &i);
	printf("Digite outro número: ");
	scanf("%d", &f);
	if(i<=f){
		while(i<=f){
			printf("%d ", i);
			i++;
		}
	}else{
		while(i>=f){
			printf("%d ", i);
			i--;
		}
	}
}
