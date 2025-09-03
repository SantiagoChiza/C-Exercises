#include <stdio.h>

enum Mes {ENERO = 1, FEBRERO, MARZO, ABRIL, MAYO, JUNIO, JULIO, AGOSTO, SEPTIEMBRE};

int main() {
    enum Mes actual = SEPTIEMBRE;
    printf("Estamos en el mes número: %d\n", actual);
    return 0;
}
