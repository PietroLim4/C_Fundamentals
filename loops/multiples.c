// Dado um número pelo usuário, exibir os 10 primeiros múltiplos desse número.

#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, m, r;
	printf("Número: ");
	scanf("%d", &n);
	m=1;
	printf("Múltiplos: ");
	while (m<=10){
		r=n*m;
		printf("%d ", r);
		m++;
	}
}
