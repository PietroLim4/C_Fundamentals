// Receber 10 números pelo usuário e exibir o maior.

#include <stdio.h>
int main(){
	int n, c=1, m=0;
	while(c<=10){
		scanf("%d", &n);
		if(m<=n){
			m=n;
		}
		c++;
	}
	printf("%d\n", m);
}
