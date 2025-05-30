#include <stdio.h>
#include <stdlib.h>

/* promedio curso.
el programa, al recibir como dato el promedio de un alumno en un curso
 ➥universitario, escribe si su promedio es ,mayor o igual a 6.

 pro: variabe de tipo real. */
 void main(void)
  {
float pro;
printf("ingrese el promedio del alumno: ");
scanf("%f", &pro);
if (pro >= 6)
printf("\nAprovado");

}
