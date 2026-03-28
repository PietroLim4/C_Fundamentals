// Solicitar ao usuário até qual numero será exibido na tela (iniciar a partir do 1

#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, l;
	printf("Quantos números? ");
	scanf("%d", &l);
	n=1;
	while (n<=l){
		printf("%d ", n);
		n++;
	}
}
