#include <stdio.h>

void convertir(float cantidad, float tasa, char *moneda) {
    printf("\n%.2f equivale a %.2f %s\n", cantidad, cantidad * tasa, moneda);
}

int main() {
    int monedaOrigen, monedaDestino;
    float cantidad;
    
    while (1) {
        printf("\nConversor de Monedas\n");
        printf("Seleccione su tipo de moneda:\n");
        printf("1. Quetzales (GTQ)\n");
        printf("2. Dólares (USD)\n");
        printf("3. Euros (EUR)\n");
        printf("4. Salir\n");
        printf("Opción: ");
        scanf("%d", &monedaOrigen);
        
        if (monedaOrigen == 4) {
            printf("Saliendo del programa...\n");
            break;
        }
        
        if (monedaOrigen < 1 || monedaOrigen > 3) {
            printf("Opción fuera del rango, intente de nuevo.\n");
            continue;
        }

        printf("Seleccione la moneda a cambiar:\n");
        printf("1. Quetzales (GTQ)\n");
        printf("2. Dólares (USD)\n");
        printf("3. Euros (EUR)\n");
        printf("Opción: ");
        scanf("%d", &monedaDestino);
        
        if (monedaDestino < 1 || monedaDestino > 3) {
            printf("Opción no válida, intente de nuevo.\n");
            continue;
        }
        
        if (monedaOrigen == monedaDestino) {
            printf("No se puede convertir a la misma moneda.\n");
            continue;
        }

        printf("Ingrese la cantidad a convertir: ");
        scanf("%f", &cantidad);
        
        if (monedaOrigen == 1 && monedaDestino == 2)
            convertir(cantidad, 0.13, "USD");
        else if (monedaOrigen == 1 && monedaDestino == 3)
            convertir(cantidad, 0.12, "EUR");
        else if (monedaOrigen == 2 && monedaDestino == 1)
            convertir(cantidad, 7.8, "GTQ");
        else if (monedaOrigen == 2 && monedaDestino == 3)
            convertir(cantidad, 0.92, "EUR");
        else if (monedaOrigen == 3 && monedaDestino == 1)
            convertir(cantidad, 8.5, "GTQ");
        else if (monedaOrigen == 3 && monedaDestino == 2)
            convertir(cantidad, 1.09, "USD");
    }
    return 0;
}
