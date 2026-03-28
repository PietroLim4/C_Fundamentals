/* 
Dada a tabela de cálculo do INSS:
Salário Alíquota para fins de recolhimento ao INSS (%)
até 1.247,70 | 8,00
de 1.247,71 até 2.079,50 | 9,00
de 2.079,51 até 4.159,00 | 11,00
Acima de 4.159,00 | Cobrar teto de 468,00
Fazer um algoritmo que leia o salário do contribuinte e calcule quanto ele irá pagar de INSS.
*/

#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float sal, inss;
	printf("Digite o seu salário: ");
	scanf("%f", &sal);
	if(sal <= 1247.7){
		inss = sal * 0.08;
	}else{
		if(sal >= 1247.71 & sal <= 2079.5){
			inss = sal * 0.09;
		}else{
			if(sal >= 2079.51 & sal <= 4159){
				inss = sal * 0.11;
			}
			else{
				inss = 468;
			}
		}
	}
	printf("Você irá pagar R$%.2f de inss.", inss);
}
