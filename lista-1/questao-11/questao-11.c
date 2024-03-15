#include <stdio.h>

int main() {
    float cotacao, quant_reais, valor_dolar;

    printf("Informe a cotacao do dolar: ");
    scanf("%f", &cotacao);
    printf("Informe a quantidade de reais a ser convertido: ");
    scanf("%f", &quant_reais);

    valor_dolar = quant_reais / cotacao;

    printf("O valor em dolar e: $%.2f", valor_dolar);

    return 0;
}