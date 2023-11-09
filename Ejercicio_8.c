#include <stdio.h>
//Se debe ingresar un valor para poder mostrar la secuencia.
int main() {
    int n = 10;
    int a = 1, b = 1, c;

    printf("Secuencia de Fibonacci con %d términos:\n", n);
    printf("%d\n%d\n", a, b);

    for (int i = 3; i <= n; i++) {
        c = a + b;
        printf("%d\n", c);
        a = b;
        b = c;
    }

    return 0;
}
