#include <stdio.h>

enum Estado {APAGADO, ENCENDIDO, SUSPENDIDO};

int main() {
    enum Estado estado = ENCENDIDO;
    if (estado == ENCENDIDO) {
        printf("El dispositivo está encendido.\n");
    }
    return 0;
}
