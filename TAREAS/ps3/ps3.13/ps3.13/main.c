#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

// Función para saber si un número es primo (simple, sin optimizaciones)
int esPrimo(int num) {
    int div, cuenta = 0;
    if (num < 2) return 0;

    for (div = 1; div <= num; div++) {
        if (num % div == 0) {
            cuenta++;
        }
    }
    if (cuenta == 2)
        return 1;
    else
        return 0;
}

int main() {
    int N1, N2, i, temp;

    printf("Ingresa dos numeros enteros positivos:\n");
    scanf("%d %d", &N1, &N2);

    // Asegurar que N1 sea menor o igual que N2
    if (N1 > N2) {
        temp = N1;
        N1 = N2;
        N2 = temp;
    }

    printf("Primos gemelos entre %d y %d:\n", N1, N2);

    for (i = N1; i <= N2 - 2; i++) {
        if (esPrimo(i) && esPrimo(i + 2)) {
            printf("(%d, %d)\n", i, i + 2);
        }
    }

    return 0;
}
