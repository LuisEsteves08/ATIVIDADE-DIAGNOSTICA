#include <stdio.h>
#include <math.h>

int main() {
	float raio, area, perimetro;
	printf("Digite o valor do raio: ");
	scanf("%f",&raio);
	area = M_PI * pow(raio,2);
	perimetro = 2 * M_PI * raio;
	printf("A area do circulo: %.2f\n",area);
	printf("O Perimetro e: %.2f",perimetro);
	
	return 0;
}
