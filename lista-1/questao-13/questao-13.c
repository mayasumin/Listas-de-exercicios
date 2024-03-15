#include <stdio.h>

int main() {
    int a, b, suporte;

    printf("Informe um valor para A: ");
    scanf("%d", &a);
    printf("Informe um valor para B: ");
    scanf("%d", &b);

    suporte = a;
    a = b;
    b = suporte;

    printf("O novo valor de A e: %d\n", a);
    printf("O novo valor de B e: %d", b);

    return 0;
}