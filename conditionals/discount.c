// Dada uma venda pelo usuário, calcular um desconto de 10% caso a venda seja superior a 1000 reais, senão calcular o desconto de 4%. No final, exiba o valor com desconto.

#include <stdio.h>
int main(){
	float venda;
	printf("Digite o valor da sua venda: R$");
	scanf("%f", &venda);
	if(venda>1000){
		venda = venda * 0.9;
	}
	else{
		venda = venda * 0.96;
	}
	printf("O valor com desconto e: R$%.2f", venda);
}
