#include <stdio.h>

int main() {
    int num_1, num_2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num_1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num_2);

    printf("O valor da soma e: %d\n", num_1 + num_2);
    printf("O valor da subtracao e: %d\n", num_1 - num_2);
    printf("O valor da multiplicacao e: %d\n", num_1 * num_2);
    printf("O valor da divisao e: %d, com resto %d\n", num_1 / num_2, num_1 % num_2);

    return 0;
}