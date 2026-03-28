// Solicitar ao usuário um número e exibir a tabuada no formato escola

#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, m, r;
	printf("Número: ");
	scanf("%d", &n);
	m=1;
	while(m<=10){
		r=n*m;
		printf("%dx%d=%d\n", n, m, r);
		m++;
	}
}
