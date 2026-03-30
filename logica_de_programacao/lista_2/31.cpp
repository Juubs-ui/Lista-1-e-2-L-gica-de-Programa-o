#include <stdio.h>

int main() {
    int numero, bit;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    bit = numero & 1;

    printf("Bit de menor ordem: %d\n", bit);

    return 0;
}