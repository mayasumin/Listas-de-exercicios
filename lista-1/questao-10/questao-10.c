#include <stdio.h>

int main() {
    float volume, comprimento, largura, altura;

    printf("Informe o comprimento da caixa: ");
    scanf("%f", &comprimento);
    printf("Informe a largura da caixa: ");
    scanf("%f", &largura);
    printf("Informe a altura da caixa: ");
    scanf("%f", &altura);

    volume = comprimento * largura * altura;

    printf("O volume da caixa e de: %.1f metros cubicos", volume);

    return 0;
}