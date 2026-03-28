// // Dados dois números pelo usuário, exibir o intervalo entre eles em ordem decrescente, incluindo-os.

#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, maior, menor;
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número.: ");
    scanf("%d", &n2);
    maior=n1;
    if(maior<n2){
    	maior=n2;
    	menor=n1;
	} else{
		menor=n2;
	}
	while(maior>=menor){
		printf("%d ", maior);
		maior=maior-1;
	}
}
