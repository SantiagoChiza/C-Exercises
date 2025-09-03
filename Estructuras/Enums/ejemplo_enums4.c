#include <stdio.h>

enum Color {ROJO = 1, VERDE = 2, AZUL = 4};

int main() {
    enum Color favorito = AZUL;
    printf("Color favorito (valor RGB): %d\n", favorito);
    return 0;
}
