#include <stdio.h>

int main() {
    int numeros[50]; 
    int n, suma = 0;
    int orden = 0; 

    printf("Ingrese una lista de números (ingrese 0 para terminar):\n");
    scanf("%d", &n);

    int i = 0;
    numeros[i] = n;

    while (n != 0) {
        i++;
        scanf("%d", &n);
        numeros[i] = n;
    }

    int longitud = i; 

    if (longitud <= 1) {
        orden = 0; 
    } else {
        if (numeros[0] < numeros[1]) {
            orden = 1; 
        } else {
            orden = -1; 
        }
    }

    if (longitud > 1) {
        suma = numeros[0] + numeros[longitud - 1];
    }

    if (orden == 1) {
        printf("La lista de números está en orden ascendente.\n");
    } else if (orden == -1) {
        printf("La lista de números está en orden descendente.\n");
    } else {
        printf("La lista de números está desordenada o tiene menos de dos números.\n");
    }
    printf("La suma entre el primer y el último número es: %d\n", suma);

    return 0;
}
