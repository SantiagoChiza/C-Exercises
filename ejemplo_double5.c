#include <stdio.h>
#include <math.h>

int main() {
    double base, exponente, resultado;

    printf("Ingrese la base: ");
    scanf("%lf", &base);

    printf("Ingrese el exponente: ");
    scanf("%lf", &exponente);

    resultado = pow(base, exponente);

    printf("El resultado de %.2lf ^ %.2lf es: %.2lf\n", base, exponente, resultado);

    return 0;
}


