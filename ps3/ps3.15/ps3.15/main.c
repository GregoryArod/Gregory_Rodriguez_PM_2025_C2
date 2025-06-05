#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main() {
    int N1, N2, temp;

    printf("Ingresa dos numeros naturales: ");
    scanf("%d %d", &N1, &N2);

    while (N2 != 0) {
        temp = N2;
        N2 = N1 % N2;
        N1 = temp;
    }

    printf("El maximo comun divisor (MCD) es: %d\n", N1);

    return 0;
}
