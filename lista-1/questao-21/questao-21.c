#include <stdio.h>

int main() {
    int num_1, num_2, resto, multiplo;
    float divisao;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num_1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num_2);

    divisao = num_1 / num_2;
    resto = num_1 - (divisao * num_2);
    multiplo = resto == 0;

    printf("O primeiro numero e %s do segundo numero", multiplo ? "multiplo" : "nao multiplo");

    return 0;
}