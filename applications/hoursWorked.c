/* Dada as horas trabalhadas e horas extras, calcular quanto foi ganho. Calcular inss e imposto de renda. Exibir gastos de inss e imposto de renda junto ao salário total e liquido.
25 reais por hora
hora extra vale 50% mais
inss = 11% das horas trabalhadas
ir = 15% do total*/

#include <stdio.h>
int main(){
	float horasTra, ganTra, horasEx, ganEx, inss, ir, total, liquido;
	printf("Qtd. Horas trabalhadas: ");
	scanf("%f", &horasTra);
	printf("Qtd. Horas extras: ");
	scanf("%f", &horasEx);
	ganTra = horasTra * 25;
	ganEx = horasEx * 37.5;
	inss = ganTra * 0.11;
	ir = (ganTra + ganEx) * 0.15;
	total = ganTra + ganEx;
	liquido = total - (inss + ir);
	printf("INSS: %.2f\n", inss);
	printf("IR: %.2f\n", ir);
	printf("Ganho total: %.2f\n", total);
	printf("Ganho liquido: %.2f\n", liquido);
}
