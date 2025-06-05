#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main() {
    int N, i, j;
    float vin[100][4];       // asumiendo máximo 100 años
    float totalTipos[4] = {0, 0, 0, 0};
    float totalAnios[100] = {0};

    printf("Cuantos anos de datos tienes? ");
    scanf("%d", &N);

    // Leer datos de producción
    for (i = 0; i < N; i++) {
        printf("Produccion del ano %d:\n", i + 1);
        for (j = 0; j < 4; j++) {
            printf("Litros tipo %d: ", j + 1);
            scanf("%f", &vin[i][j]);
            totalTipos[j] += vin[i][j];   // sumar por tipo
            totalAnios[i] += vin[i][j];   // sumar por año
        }
    }

    // Mostrar total por tipo de vino
    printf("\nTotal producido por cada tipo de vino en %d anos:\n", N);
    for (j = 0; j < 4; j++) {
        printf("Tipo %d: %.2f litros\n", j + 1, totalTipos[j]);
    }

    // Mostrar total por año
    printf("\nTotal producido por ano:\n");
    for (i = 0; i < N; i++) {
        printf("Ano %d: %.2f litros\n", i + 1, totalAnios[i]);
    }


}
