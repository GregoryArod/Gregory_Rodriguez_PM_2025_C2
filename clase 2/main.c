#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
 // Esquema que determina el rango de edad de una persona
    // 1 - Reci�n nacido persona de edad menor a 1 a�o
    // 2 - Infante persona de edad actual 1 a 3 a�os
    // 3 - Ni�ez persona de edad entre 3 a 12 a�os
    // 4 - Adolescente persona de entre 12 a 18 a�os
    // 5 - Mayor de edad persona de edad entre 18 a 38 a�os
    // 6 - Adulto persona de edad entre 38 a 68 a�os
    // 7 - Anciano persona mayor de 68 a�os de edad
    // Si usted fallo lo que sea que no sea sexo es verdadero
int main() {
    int edad;

    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    if (edad >= 0 && edad <= 120) {
        if (edad < 1) {
            printf("Usted es un reci�n nacido.\n");
        } else if (edad >= 1 && edad < 3) {
            printf("Usted es un infante.\n");
        } else if (edad >= 3 && edad < 12) {
            printf("Usted est� en la ni�ez.\n");
        } else if (edad >= 12 && edad < 18) {
            printf("Usted es un adolescente.\n");
        } else if (edad >= 18 && edad < 38) {
            printf("Usted es un adulto joven (mayor de edad).\n");
        } else if (edad >= 38 && edad < 68) {
            printf("Usted es un adulto.\n");
        } else { // edad >= 68
            printf("Usted es un anciano.\n");
        }
    } else {
        if (edad < 0) {
            printf("Error: Edad negativa no v�lida.\n");
        } else {
            printf("Error: Edad muy alta, no es real.\n");
        }
    }

    return 0;
}


