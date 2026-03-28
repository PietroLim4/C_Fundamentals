// Dadas duas notas pelo usuário, calcular a média simples e informar se o aluno está aprovado (média de ao menos 6) ou reprovado. Em ambos os casos exiba a média do aluno.

#include <stdio.h>
int main()
{
	float nota1, nota2, media;
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	media = (nota1 + nota2) / 2;
	if(media >= 6){
		printf("Voce foi aprovado, sua media foi: %.1f", media);
	}
	else{
		printf("Voce n�o foi aprovado, sua media foi: %.1f", media);
	}
}
