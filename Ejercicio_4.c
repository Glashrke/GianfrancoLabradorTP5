#include <stdio.h>
float promeGeneral(){
	int totalAlumnos = 30;
	float notas[totalAlumnos];
	float suma = 0;
	float prome;
	
	for(int i = 0;i<totalAlumnos;i++){
		printf("Ingrese la nota del alumno N�%d: \n",i+1);
		scanf("%f",&notas[i]);
		suma = suma + notas[i];
	}
	
	prome = suma/totalAlumnos;
	return prome;
}
int main(){
	int totalAlumnos = 30;
	float notas[totalAlumnos];
	float suma = 0;
	float prome;//Variable no utilizada.
	float promedio = promeGeneral();
	printf("El promedio general del curso es de: %.2f",promedio);
	return 0;
}
