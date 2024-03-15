#include <stdio.h>

int main() {
    int decimal, divisao, resto;
    char hexa[] = "0123456789ABCDEF";
    char octal[] = "01234567";
    char hexaResult[3];
    char octalResult[3];

    printf("Digite um valor decimal: ");
    scanf("%d", &decimal);

    divisao = decimal / 16;
    resto = decimal % 16;
    hexaResult[0] = hexa[divisao];
    hexaResult[1] = hexa[resto];
    hexaResult[2] = '\0';

    divisao = decimal / 8;
    resto = decimal % 8;
    octalResult[0] = octal[divisao];
    octalResult[1] = octal[resto];
    octalResult[2] = '\0';

    printf("O valor em hexadecimal: %s\n", hexaResult);
    printf("O valor em octal: %s\n", octalResult); 

    return 0;
}
