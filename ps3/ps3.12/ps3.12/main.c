#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main() {
    int NUM, i, j, divisores;

    printf("Ingresa un numero entero positivo: ");
    scanf("%d", &NUM);

    printf("Numeros primos menores que %d son:\n", NUM);

    for (i = 2; i < NUM; i++) {
        divisores = 0;

        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            printf("%d ", i);
        }
    }

    printf("\n");

}
