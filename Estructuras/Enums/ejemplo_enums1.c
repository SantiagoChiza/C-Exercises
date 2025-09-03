#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida

enum Dia {LUNES, MARTES, MIERCOLES, JUEVES, VIERNES}; // Define un enum para los días

int main() { // Función principal
    enum Dia hoy = MARTES; // Declara una variable enum y la inicializa
    printf("El valor de hoy es: %d\n", hoy); // Imprime el valor numérico del día
    if (hoy == MARTES) { // Verifica si hoy es miércoles
        printf("Hoy es martes\n"); // Imprime mensaje si es miércoles
    }
    return 0; // Indica que el programa terminó correctamente
}
