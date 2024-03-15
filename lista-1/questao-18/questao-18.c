#include <stdio.h>

int main() {
    float pi = 3.14159;
    float raio, circunf, diametro, area;

    printf("Informe o raio do circulo: ");
    scanf("%f", &raio);

    printf("O diametro do circulo e: %.2f\n", 2 * raio);
    printf("O valor da circunferencia do circulo e: %.2f\n", 2 * pi * raio);
    printf("A area do circulo e: %.2f\n", pi * (raio * raio));

    return 0;
}