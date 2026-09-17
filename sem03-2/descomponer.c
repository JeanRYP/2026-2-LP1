#include <stdio.h>

int main(void) {
    int n;

    printf("Escribe un num: ");
    scanf("%d", &n);

    printf("Valor de n: %d\n", n);
    printf("Miles: %d\n", n / 1000);
    printf("Centenas: %d\n", (n / 100) % 10);
    printf("Decenas: %d\n", (n / 10) % 10);
    printf("Unidades: %d\n", n % 10);

    return 0;
}
