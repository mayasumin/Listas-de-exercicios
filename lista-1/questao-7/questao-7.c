#include <stdio.h>

int main() {
    int horas, minutos, segundos, total_segundos;

    printf("Informe as horas: ");
    scanf("%d", &horas);
    printf("Informe os minutos: ");
    scanf("%d", &minutos);
    printf("Informe os segundos: ");
    scanf("%d", &segundos);

    total_segundos = (horas * 3600) + (minutos * 60) + segundos;

    printf("No total, ja se passaram %d segundos\n", total_segundos);

    return 0;
}