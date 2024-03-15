#include <stdio.h>

int main() {
    int num, num_invertido, centena, dezena, unidade;

    printf("Insira um numero de 3 digitos: ");
    scanf("%d", &num);

    centena = num / 100;
    dezena = (num % 100) / 10;
    unidade = num % 10;

    num_invertido = (unidade * 100) + (dezena * 10) + centena;

    printf("Quando invertido, o numero fica: %d", num_invertido);

    return 0;
}