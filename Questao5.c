#include <stdio.h>

int main() {
    int maquinas1 = 8, maquinas2 = 10;
    float pecas1 = 120, pecas2;
    float horas = 5;
    float producao;
	producao = pecas1 / maquinas1;
    pecas2 = producao * maquinas2;
    printf("Em %.0f horas, %d maquinas produzem %.0f pecas", horas, maquinas2, pecas2);

    return 0;
}
