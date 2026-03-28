// Dado um número, fazer um algoritmo que calcule o próximo número múltiplo de 5.

#include <stdio.h>
int main(){
    int resp=0, alvo;
    printf("Digite um valor: ");
    scanf("%d", &alvo);
    while(resp<=alvo){
        resp+=5;
    }
    printf("O proximo multiplo de 5 e: %d", resp);
}