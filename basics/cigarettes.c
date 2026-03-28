// Dado o preço do maço de cigarros (preco), a quantidade de maços consumidos por dia (q_m_d) e o tempo em anos (anos) que a pessoa fuma, calcular quanto esta pessoa já gastou fumando. 

#include <stdio.h>
int main(){
	float preco, q_m_d, anos, dias, macos, gasto;
	printf("Qual o preco do maco que voce compra? ");
	scanf("%f", &preco);
	printf("E quantos macos voce fuma, em media, por dia? ");
	scanf("%f", &q_m_d);
	printf("E por ultimo, voce ja fuma a quantos anos? ");
	scanf("%f", &anos);
	dias = anos * 365;
	macos = q_m_d * dias;
	gasto = macos * preco;
	printf("A media do seu gasto em fumo, e de aproximadamente R$%.2f", gasto);
}
