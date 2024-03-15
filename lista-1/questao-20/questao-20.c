#include <stdio.h>

int main() {
    int numero, resto_divisao, paridade;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    resto_divisao = numero % 2;
    paridade = resto_divisao * resto_divisao + 1;

    printf("O numero e %s", paridade == 1 ? "par" : "impar");

    return 0;
}