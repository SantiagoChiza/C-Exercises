#include <stdio.h>

enum Acceso {INVITADO = 1, USUARIO = 2, ADMIN = 3};

int main() {
    enum Acceso nivel = ADMIN;
    printf("Nivel de acceso: %d\n", nivel);
    return 0;
}
