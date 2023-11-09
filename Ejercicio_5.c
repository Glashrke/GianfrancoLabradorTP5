#include <stdio.h>

int main() {
    int totalVendedores = 20;
    int totUnidades[20], suma = 0;
    int mayorVentaDiaria = 0; 
    int vendedorConMayorVentaDiaria = -1; 

    for (int i = 0; i < totalVendedores; i++) {
        printf("Vendedor %d: Ingrese cuantas unidades ha vendido en los ultimos 15 dias: ", i + 1);
        scanf("%d", &totUnidades[i]);
        suma += totUnidades[i];

        if (totUnidades[i] > mayorVentaDiaria) {
            mayorVentaDiaria = totUnidades[i];
            vendedorConMayorVentaDiaria = i;
        }
    }

    printf("El total de las unidades vendidas es: %d\n", suma);

    if (vendedorConMayorVentaDiaria != -1) {
        printf("El vendedor con la mayor venta diaria es el Vendedor %d\n",
               vendedorConMayorVentaDiaria + 1);
    }
    return 0;
}
