#include <stdio.h>
#include "racional.h"

int main() {
    int n1, d1, n2, d2;
    int n_res, d_res;

    printf("Ingrese el numerador y denominador de la primera fraccion separados por espacio: ");
    scanf("%d %d", &n1, &d1);

    printf("Ingrese el numerador y denominador de la segunda fraccion separados por espacio: ");
    scanf("%d %d", &n2, &d2);

    sumar(n1, d1, n2, d2, &n_res, &d_res);

    printf("La suma simplificada es: %d/%d\n", n_res, d_res);

    return 0;
}