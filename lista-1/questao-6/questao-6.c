#include <stdio.h>

int main() {
    float altura, peso_ideal;
    char genero;

    printf("Informe seu genero ('m' para mulher, 'h' para homem): ");
    scanf("%c", &genero);
    printf("Informe sua altura: ");
    scanf("%f", &altura);

    if(genero == 'm') {
        peso_ideal = 62.1 * altura - 58;
    } else if (genero == 'h') {
        peso_ideal = 72.7 * altura - 58;
    } else {
        printf("Insira um genero valido\n");
        return 1;
    }

    printf("Seu peso ideal e: %.2f\n", peso_ideal);

    return 0;
}