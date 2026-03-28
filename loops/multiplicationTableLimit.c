// Solicitar ao usuário dois números (o da tabuada e do multiplicador) e exibir a tabuada no formato escolar

#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int t, m, r, l;
	printf("Tabuada: ");
	scanf("%d", &t);
	printf("Limite: ");
	scanf("%d", &l);
	m=1;
	while(m<=l){
		r=t*m;
		printf("%dx%d=%d\n", t, m, r);
		m++;
	}
}
