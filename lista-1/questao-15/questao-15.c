#include <stdio.h>

int main() {
    float valor_diario = 50.25;
    float sal_bruto, sal_liquido, gratificacao;
    int dias_trab;

    printf("Informe o numero de dias trabalhados: ");
    scanf("%d", &dias_trab);

    sal_bruto = dias_trab * valor_diario;
    gratificacao = dias_trab <= 10 ? 0 : dias_trab <= 20 ? sal_bruto * 0.2 : sal_bruto * 0.3;
    sal_liquido = sal_bruto + gratificacao - (sal_bruto + gratificacao) * 0.1;

    printf("O salario liquido a ser pago ao vendedor e: R$%.2f", sal_liquido);
    return 0;
}