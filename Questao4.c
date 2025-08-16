#include <stdio.h>
int main(){
	float preco, desconto, valorfinal;
	printf("Digite o Valor: ");
	scanf("%f",&preco);
	printf("Digite o percentual do desconto: ");
	scanf("%f",&desconto);
	desconto = preco * (desconto / 100);
	valorfinal = preco - desconto;
	printf("O valor do produto dado o desconto sera de R$%.2f",valorfinal);
	return 0;
}
