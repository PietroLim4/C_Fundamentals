// Dentre três números dados pelo usuário, verificar e exibir o de maior valor

#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, n3, maior;
	printf("Digite o primeiro número: ");
	scanf("%d", &n1);
	printf("Digite o segundo número: ");
	scanf("%d", &n2);
	printf("Digite o terceiro número: ");
	scanf("%d", &n3);
	maior = n1;
	if(maior < n2){
		maior = n2;
	}
	if(maior < n3){
		maior = n3;
	}
	printf("\n%d é o maior desses números", maior);
}
