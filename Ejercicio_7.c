#include <stdio.h>

int main() {
    int numAlumnos = 15;
    float notas[numAlumnos];
  
    for (int i = 0; i < numAlumnos; i++) {
        printf("Ingrese la nota del alumno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
    
    printf("Alumnos con nota mayor a 8:\n");

    for (int i = 0; i < numAlumnos; i++) {
        if (notas[i] > 8.0) {
            printf("Alumno %d\n", i + 1);
        }
    }

    return 0;
}
