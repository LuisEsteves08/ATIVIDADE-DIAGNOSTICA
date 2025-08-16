#include <stdio.h>

int main() {
	
    float salario, valorHora, valorTotal;
    int horasExtras;
    printf("Digite o salario: R$ ");
    scanf("%f", &salario);
    printf("Digite o valor das horas extra: R$ ");
    scanf("%f", &valorHora);
    printf("Digite a quantidade de horas extras trabalhadas: ");
    scanf("%d", &horasExtras);
    valorTotal = salario + (valorHora * horasExtras);
    printf("O valor total a receber sera: R$ %.2f", valorTotal);

    return 0;
}
