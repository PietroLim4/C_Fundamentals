// Dado três números pelo usuário, verificar se eles formam um triângulo ou não. Caso forme um triângulo, classificar qual tipo de triângulo.

#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
	int a, b, c;
	printf("Digite o tamanho do primeiro lado do triângulo: ");
	scanf("%d", &a);
	printf("Digite o tamanho do segundo lado do triângulo.: ");
	scanf("%d", &b);
	printf("Digite o tamanho do terceiro lado do triângulo: ");
	scanf("%d", &c);
	if(a+b>c&&b+c>a&&c+a>b){
		if(a==b&&b==c){
			printf("Forma um triângulo equilátero.");
		} else if(a==b||b==c||c==a){
			printf("Forma um triângulo isósceles.");
		} else{
			printf("Forma um triângulo escaleno.");
		}
	} else{
		printf("Não forma um triângulo.");
	}
}
