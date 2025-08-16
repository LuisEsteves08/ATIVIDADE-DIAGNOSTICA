#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int valor,convertido;
	printf("Digite o Valor da temperatura: ");
	scanf("%d",&valor);
	convertido = (valor * 1.8) + 32;
	printf("A temperatura em Celsius convertida em Fahrenheit e:%d ",convertido);
	return 0;
}
