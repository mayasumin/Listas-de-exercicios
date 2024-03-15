#include <stdio.h>

int main() {
    int num, modulo;

    printf("Informe um numero: ");
    scanf("%d", &num);

    modulo = (num + (num < 0) * (-2 * num));

    printf("O modulo de %d e %d", num, modulo);

    return 0;
}