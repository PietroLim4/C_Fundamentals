// Receber 10 números pelo usuário e exibir quantos são pares.

#include <stdio.h>
int main(){
	int n, c, p;
	p=0;
	c=1;
	while(c<=10){
		scanf("%d", &n);
		if(n%2==0){
			p++;
		}
		c++;
	}
	printf("%d são pares.", p);
}
