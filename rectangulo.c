#include <stdio.h>

int main() {
    float l, a, ar, p;

    printf("Ingrese la longitud del rectángulo: ");
    scanf("%f", &l);

    printf("Ingrese el ancho del rectángulo: ");
    scanf("%f", &a);

    ar = l * a;
    p = 2 * (l + a);

    printf("\nLongitud del rectángulo: %.2f\n", l);
    printf("Ancho del rectángulo: %.2f\n", a);
    printf("Área del rectángulo: %.2f\n", ar);
    printf("Perímetro del rectángulo: %.2f\n", p);

    return 0;
}