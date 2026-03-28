/* Receber um valor da venda pelo usuário. Oferecer 3 formas de pagamento e dependendo da escolhida aplicar:
Pix/Dinheiro: 10% de desconto
Debito: Valor normal
Credito: 2% de acrescimo*/

#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float v;
	int n;
	printf("Digite o valor da venda: R$");
	scanf("%f", &v);
	printf("\n1-Pix/dinheiro\n2-Debito\n3-Credito\n\nDigite a forma de pagamento:");
	scanf("%d", &n);
	if(n == 1){
		v = v * 0.9;
	}if(n == 3){
		v = v * 1.02;
	}
	printf("\nO valor fica em R$%.2f", v);
}
