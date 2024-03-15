#include <stdio.h>

int main() {
    int consumo, taxa;
    double porcentagem = 0.10;

    printf("Escreva o valor pago por consumo: ");
    scanf("%d", &consumo);

    taxa = consumo * porcentagem;

    printf("O valor total da conta foi: %d", consumo + taxa);

    return 0;
}