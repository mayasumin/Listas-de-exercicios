#include <stdio.h>

int main() {
    int x, n, resultado;

    printf("Informe o valor de x: ");
    scanf("%d", &x);
    printf("Informe o valor de n: ");
    scanf("%d", &n);

    resultado = x << n;

    printf("O produto de x por 2 elevado a n e: %d", resultado);

    return 0;
}