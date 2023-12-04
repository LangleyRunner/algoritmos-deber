#include <stdio.h>

int main() {
    float tc, d, mf;

    printf("Ingrese el total de la compra: $");
    scanf("%f", &tc);

    d = 0.15 * tc;
    mf = tc - d;

    printf("\nTotal de compra: $%.2f\n", tc);
    printf("Descuento (15%%): $%.2f\n", d);
    printf("Monto final a pagar: $%.2f\n", mf);

    return 0;
}