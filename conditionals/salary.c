// Dado o salário bruto do usuário, calcular inss, imposto de renda e salário liquido.

#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
	float bruto, liquido, inss, ir;
	printf("Digite o seu sal�rio bruto: R$");
	scanf("%f", &bruto);
	if(bruto <= 1518){
		inss = bruto * 0.075;
	} else if(bruto > 1518 & bruto <= 2793.88){
		inss = bruto * 0.09-22.77;
	} else if(bruto >= 2793.89 & bruto <= 4190.83){
		inss = bruto * 0.12-106.59;
	} else if(bruto >= 4190.84 & bruto <= 8157.41){
		inss = bruto * 0.14-190.4;
	} else{
		inss = 8157.41 * 0.14-190.4;
	}
	if(bruto <= 2259.2){
		ir = 0;
	} else if(bruto >= 2259.21 & bruto <= 2826.65){
		ir = bruto * 0.075-169.44;
	} else if(bruto >= 2826.66 & bruto <= 3751.05){
		ir = bruto * 0.15-381.44;
	} else if(bruto >= 3751.06 & bruto <= 4664.68){
		ir = bruto * 0.225-662.77;
	} else {
		ir = bruto * 0.275-896;
	}
	liquido = bruto-inss-ir;
	printf("Sal�rio........: R$ %9.2f\nINSS...........: R$ %9.2f\nIR.............: R$ %9.2f\nSal�rio L�quido: R$ %9.2f", bruto, inss, ir, liquido);
}
