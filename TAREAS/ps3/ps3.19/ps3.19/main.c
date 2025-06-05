#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main() {
    int N, i, j, num;

    printf("Ingresa un numero entero positivo: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        // Subida: desde i hasta i+i
        for (j = 0; j <= i; j++) {
            num = (i + j) % 10;
            printf("%d ", num);
        }

        // Bajada: desde i+i-1 hasta i
        for (j = i - 1; j >= 0; j--) {
            num = (i + j) % 10;
            printf("%d ", num);
        }

        printf("\n");
    }

    return 0;
}
