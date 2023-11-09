#include <stdio.h>
int calcularNumsInter(int num1, int num2){
	int cantNumeros = 0;
	cantNumeros = num2-num1-1;
	int numerosIntermedios[cantNumeros];
	for(int i=0;i<cantNumeros;i++){
		numerosIntermedios[i]=num1+i+1;
	}
	printf("Numeros intermedios cargados: \n\n");
	for(int j=0;j<cantNumeros;j++){
		printf("%d \n",numerosIntermedios[j]);
	}
}
int main(){
	int num1 = 0, num2 = 0, aux = 0;
	int cantNumeros = 0;
	int numerosIntermedios[cantNumeros];
	printf("Programa codificado para calcular y \n mostrar los numeros intermedios entre 2 numeros\n\n");
	printf("Ingrese el primer numero: \n");
	scanf("%d",&num1);
	printf("Ingrese el segundo numero \n");
	scanf("%d",&num2);
	
	if(num1 > num2){
		int temp = num1;
		num1 = num2;
		num2 = temp;
		printf("Me aseguro que num1 sea menor o igual que num2 \n");
		printf("num1: %d\n",num1);
		printf("num2: %d\n",num2);
	}
	
	calcularNumsInter(num1,num2);
	return 0;
}
