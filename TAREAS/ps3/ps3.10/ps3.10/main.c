#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    float precios[6];
    int tipoLocalidad, cantidad;
    int boletosVendidos[6] = {0, 0, 0, 0, 0, 0};
    float montoVenta;
    float recaudacionTotal = 0;
    int i;

    // Paso 2: Leer precios
    printf("Dame los precios para las 6 localidades:\n");
    for (i = 0; i < 6; i++) {
        printf("Precio localidad %d: ", i + 1);
        scanf("%f", &precios[i]);
    }

    // Paso 4: Leer ventas y procesar
    while (1) {
        printf("\nDime el tipo de localidad (1-6) o 0 para terminar: ");
        scanf("%d", &tipoLocalidad);

        if (tipoLocalidad == 0) {
            break; // salir del ciclo
        }

        if (tipoLocalidad < 1 || tipoLocalidad > 6) {
            printf("Tipo de localidad no valido. Intenta otra vez.\n");
            continue;
        }

        printf("Cantidad de boletos vendidos: ");
        scanf("%d", &cantidad);

        if (cantidad < 0) {
            printf("Cantidad invalida. Intenta otra vez.\n");
            continue;
        }

        // Calcular monto de la venta
        montoVenta = precios[tipoLocalidad - 1] * cantidad;

        // Mostrar monto
        printf("Monto de esta venta: $%.2f\n", montoVenta);

        // Acumular boletos vendidos y recaudacion total
        boletosVendidos[tipoLocalidad - 1] += cantidad;
        recaudacionTotal += montoVenta;
    }

    // Paso 5: Mostrar boletos vendidos por localidad
    printf("\nBoletos vendidos por localidad:\n");
    for (i = 0; i < 6; i++) {
        printf("Localidad %d: %d boletos\n", i + 1, boletosVendidos[i]);
    }

    // Paso 6: Mostrar recaudacion total
    printf("\nRecaudacion total: $%.2f\n", recaudacionTotal);


}
