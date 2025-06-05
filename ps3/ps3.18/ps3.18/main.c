#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main() {
    int N, i, j, k;

    printf("Ingresa un numero entero positivo: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        // Parte izquierda ascendente
        for (j = 1; j <= N - i; j++) {
            printf("%d ", j);
        }

        // Espacios (no números) entre mitades
        for (k = 1; k <= i * 2; k++) {
            printf("  "); // dos espacios por valor para alinear
        }

        // Parte derecha descendente
        for (j = N - i; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
