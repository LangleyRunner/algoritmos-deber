#include <stdio.h>

int main() {
    float sa, inc, ns;

    printf("Ingrese el salario anterior del obrero: $");
    scanf("%f", &sa);

    inc = 0.25 * sa;  
    ns = sa + inc;

    printf("\nSalario anterior: $%.2f\n", sa);
    printf("Incremento (25%%): $%.2f\n", inc);
    printf("Nuevo salario: $%.2f\n", ns);

    return 0;
}