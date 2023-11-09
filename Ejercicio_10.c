#include <stdio.h>

int main() {
    int vectorsito[10];
    float suma = 0, multi = 1, promedio = 0;
    int elementosPorDebajo = 0, i;

    printf("A continuación, ingrese los 10 elementos:\n");
    for (i = 0; i < 10; i++) {
        printf("Ingresar el elemento %d: ", i + 1);
        scanf("%d", &vectorsito[i]);
        suma += vectorsito[i];
        multi *= vectorsito[i];
    }

    promedio = suma / 10;

    for (i = 0; i < 10; i++) {
        if (vectorsito[i] < promedio) {
            elementosPorDebajo++;
        }
    }

    printf("\nLa suma de los elementos es: %.2f", suma);
    printf("\nEl producto de los elementos es: %.2f", multi);
    printf("\nEl promedio entre los elementos es: %.2f", promedio);
    printf("\nLa cantidad de elementos menores al promedio calculado es de: %d", elementosPorDebajo);

    return 0;
}
