// Receber 10 números pelo usuário e somar apenas os positivos.

#include <stdio.h>
int main(){
	int n, c, r;
	c=1;
	r=0;
	while(c<=10){
		scanf("%d", &n);
		if(n>=0){
			r=r+n;
		}
		c++;
	}
	printf("%d\n", r);
}
