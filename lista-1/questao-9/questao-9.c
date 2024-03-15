#include <stdio.h>

int main() {
    int numero;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    printf("O antecessor do numero e: %d\n", numero - 1);
    printf("O sucessor do numero e: %d\n", numero + 1);

    return 0;
}