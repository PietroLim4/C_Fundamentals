// Dadas três notas (AV1, AV2 e AV3), fazer um algoritmo que calcule a media. A média consiste em descartar a menor nota entre as 3 médias calculando a média simples das outras duas. Exibir se o aluno está “Aprovado” ou “Reprovado” (média menor do que 6).

#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, menor, soma, media;
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	menor = n1;
	if(menor > n2){
		menor = n2;
	}
	if(menor > n3){
		menor = n3;
	}
	soma = n1+n2+n3;
	media = (soma-menor)/2;
	if(media<6){
		printf("Sua média foi de %.1f - Você foi reprovado", media);
	}else{
		printf("Sua média foi de %.1f - Você foi aprovado", media);
	}
}
