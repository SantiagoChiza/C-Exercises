#include <stdio.h>

int main() {
    int n = 10;
    long factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    printf("Factorial de %d es %ld\n", n, factorial);
    return 0;
}
