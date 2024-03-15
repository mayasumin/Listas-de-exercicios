#include <stdio.h>

int main() {
    int valor, quadrado_valor;

    printf("Informe o valor: ");
    scanf("%d", &valor);

    quadrado_valor = (valor * valor);

    printf("O quadrado do valor e: %d\n", quadrado_valor);

    return 0;
}