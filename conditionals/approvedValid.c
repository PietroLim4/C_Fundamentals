// Juntar os dois exercícios anteriores, ou seja, pedir a digitação das duas notas, caso uma (ou as duas) nota seja inválida exibir “Nota inválida!” e terminar o algoritmo; senão, calcular e exibir a média e exibir se está aprovado (vide saída do exercício anterior)

#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float n, n2, media;
	printf("Digite a primeira nota: ");
	scanf("%f", &n);
	if(n >= 0 & n <= 10){
		printf("Digite a segunda nota: ");
		scanf("%f", &n2);
		if(n2 >= 0 & n2 <= 10){
			media = (n+n2)/2;
			if(media < 5){
				printf("Sua média foi %.1f - Você foi reprovado.", media);
			}else{
				printf("Sua média foi %.1f - Você foi aprovado.", media);
			}
		}else{
			printf("Nota inválida!");
			return 0;
		}
	}else{
		printf("Nota inválida!");
		return 0;
	}
}
