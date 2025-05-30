#include <stdio.h>
#include <stdlib.h>

/* promedio curso.
El programa, al recibir como dato el promedio de un alumno en un curso
➥universitario, escribe aprobado si su proemdio es mayor o igual a 6, 0
➥reprobado en caso contrario.

PRO: variable de tipo real. */

void main(void)
{
    float PRO;
    printf("ingrese el promedio del alummno: ");
    scanf("%f", PRO);
    if (PRO >= 6.0)
    printf("\nAprobado");
    else
        printf("\n Reprobado");
     }
