// Um caixa eletrônico dispensa cédulas de 50, 20 e 10 reais. Considerando que a quantia seja múltipla de 10, fazer um algoritmo que exiba um relatório com quantas cédulas de cada são necessárias para compor a quantia.

#include <stdio.h>
int main(){
    int din, cinq=0, vint=0, dez=0;
    printf("Digite um valor: ");
    scanf("%d", &din);
    while(din>=50){
        cinq+=1;
        din-=50;
    }
    while(din>=20){
        vint+=1;
        din-=20;
    }
    while(din>=10){
        dez+=1;
        din-=10;
    }
    printf("Voce recebera %d notas de 50, %d notas de 20 e %d notas de 10", cinq, vint, dez);
}