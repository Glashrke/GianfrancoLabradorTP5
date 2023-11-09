/*Calcular la resistencia total de 5 resistencias en serie cargadas en un vector,
mostrar cada una de ellas y la resistencia total.*/
#include <stdio.h>
#include <stdlib.h>

int guardarResistenciasYSumar (){
        int suma = 0;
        int resistenciaTotal[5];
        for(int i=0;i<5;i++){
        printf("Ingrese la resistencia n°%d: \n",i+1);
        scanf("%d",&resistenciaTotal[i]);
        printf("Ha ingresado la resistencia n°%d: %d\n\n\n",i+1,resistenciaTotal[i]);
        suma = suma + resistenciaTotal[i];

    }
    return suma;
}
int main(){
    int suma = guardarResistenciasYSumar();
    int resistenciaTotal[5];
    printf("La resistencia total es: %d",suma);
}