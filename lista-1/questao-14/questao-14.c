#include <stdio.h>

int main() {
    float celsius, fahr;

    printf("Informe a temperatura em graus celsius: ");
    scanf("%f", &celsius);

    fahr = (9 * celsius + 160) / 5;

    printf("Em graus Fahrenheit, a temperatura e: %.1f", fahr);

    return 0;
}