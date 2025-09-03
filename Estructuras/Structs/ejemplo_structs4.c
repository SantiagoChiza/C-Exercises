#include <stdio.h>
#include <string.h>

// Definición de la estructura
struct Persona {
    char nombre[50];
    int edad;
    float altura;
};

int main() {
    // Declaración e inicialización de una variable tipo struct
    struct Persona p1;

    // Asignación de valores
    strcpy(p1.nombre, "Santiago Chiquiza");
    p1.edad = 20;
    p1.altura = 1.79;

    // Impresión de los datos
    printf("Nombre: %s\n", p1.nombre);
    printf("Edad: %d años\n", p1.edad);
    printf("Altura: %.2f metros\n", p1.altura);

    return 0;
}


