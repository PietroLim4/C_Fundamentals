// Um funcionário deseja saber quanto ele paga de inss. Quem ganha acima de 7000 reais paga 14% de inss, os demais pagam 12%. A partir do salário, calcule e exiba a cobrança de inss.

#include <stdio.h>
int main(){
	float sal, inss;
	printf("Digite o seu salario: ");
	scanf("%f", &sal);
	if(sal>7000){
		inss = sal * 0.14;
	}
	else{
		inss = sal * 0.12;
	}
	printf("Voce paga R$%.2f de inss", inss);
}
