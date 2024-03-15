#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("O triplo de %d: %d\n", numero, numero * 3);
    printf("O quadrado de %d: %d\n", numero, numero * numero);
    printf("O meio de %d: %d\n", numero, numero /2);

    return 0;
}