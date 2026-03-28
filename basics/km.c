// Dada a quilometragem parcial de um carro (km) e a quantidade de litros (l) gastos para percorrer esta quilometragem, fazer um algoritmo que calcule quantos Km/l o carro percorreu. 

#include <stdio.h>
int main(){
	float km, l, gasto;
	printf("Digite quantos quilometros o carro percorreu: ");
	scanf("%f", &km);
	printf("Digite quantos litros de gasolina o carro gastou nessa viagem: ");
	scanf("%f", &l);
	gasto = km / l;
	printf("O carro gasta %.2f litros por quilometro", gasto);
}
