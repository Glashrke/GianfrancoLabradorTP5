/*Ingresar 5 n�meros y encontrar el valor promedio y cu�l es el mayor de los
n�meros ingresados.*/
#include <stdio.h>
int promedioFuncion(){
	float numing[5];
	float prom = 0;
	float suma = 0;
	float mayor = numing[5];
	for(int i=0;i<5;i++){
		printf("Ingrese el %d numero: \n",i+1);
		scanf("%f",&numing[i]);
		suma =  suma + numing[i];
		if (numing[i]>mayor){
			mayor = numing[i];
		}
	}
	prom = suma/5;
	printf("El promedio de los numeros es: %.2f\n",prom);
	printf("El numero mayor de los ingresados es: %.2f \n",mayor);  
	return prom;
}

int main() {
	float numing[5];//¿Para que se utiliza el vector?
	float prom = 0;
	promedioFuncion();
	return 0;
}

