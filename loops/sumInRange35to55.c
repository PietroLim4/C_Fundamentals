// Receber números do usuário até receber 0. Somar todos os números entre 35 e 55.

#include <stdio.h>
int main(){
	int n, r;
	r=0;
	scanf("%d", &n);
	while(n!=0){
		if(n>=35 && n<=55){
			r+=n;
		}
		scanf("%d", &n);
	}
	printf("%d", r);
}
