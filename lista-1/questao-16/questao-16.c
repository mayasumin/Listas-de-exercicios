#include <stdio.h>

int main() {
    float hora_aula = 10.98;
    float perc_desconto = 0.10;
    float sal_bruto, sal_liquido;
    int horas_trab;

    printf("Informe o total de horas trabalhadas: ");
    scanf("%d", &horas_trab);

    sal_bruto = hora_aula * horas_trab;
    sal_liquido = sal_bruto - (sal_bruto * perc_desconto);

    printf("O salario bruto do professor e: R$%.2f\n", sal_bruto);
    printf("O salario liquido do professor e: R$%.2f", sal_liquido);

    return 0;
}