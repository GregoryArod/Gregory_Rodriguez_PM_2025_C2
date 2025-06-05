#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main() {
    int N, i, j, k;

    printf("Ingresa un numero entero positivo: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        // Ascendente
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        // Descendente
        for (k = i - 1; k >= 1; k--) {
            printf("%d ", k);
        }
        printf("\n");
    }

    return 0;
}

