#include <stdio.h>
#include <math.h>

int main() {
    float num_1, num_2, num_3, soma_num, med_arit, med_geo;

    printf("Informe os tres numeros (num1 num2 num3): ");
    scanf("%f%f%f", &num_1, &num_2, &num_3);

    soma_num = num_1 + num_2 + num_3;
    med_arit = soma_num / 3;
    med_geo = pow(soma_num, 1.0/3.0);

    printf("A media aritmetica e: %.2f\n", med_arit);
    printf("A media geometrica e: %.2f", med_geo);

    return 0;
}