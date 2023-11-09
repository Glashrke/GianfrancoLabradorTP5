#include <stdio.h>

int main() {
    int numPersonas = 20;
    float sueldos[numPersonas];
    int gananMas2k = 0;
    int gananMenos2k = 0;

    for (int i = 0; i < numPersonas; i++) {
        printf("Ingrese el sueldo de la persona %d: $", i + 1);
        scanf("%f", &sueldos[i]);

        if (sueldos[i] > 2000) {
            gananMas2k++;
        } else {
            gananMenos2k++;
        }
    }

    printf("Personas que ganan +$2000: %d\n", gananMas2k);
    printf("Personas que ganan -$2000: %d\n", gananMenos2k);

    return 0;
}
