// Solicitar ao usuário a quantidade de vezes que será exibida na tela a palavra “teste”.

#include <stdio.h>
int main(){
	int v, l;
	printf("Quantas vezes? ");
	scanf("%d", &l);
	v=1;
	while (v<=l){
		printf("Teste ");
		v++;
	}
}
