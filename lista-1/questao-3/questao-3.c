#include <stdio.h>

int main() {
    float num_real;

    printf("Escreva um numero real: ");
    scanf("%f", &num_real);

    printf("Com uma casa decimal, o numero e: %.1f\n", num_real);

    return 0;
}