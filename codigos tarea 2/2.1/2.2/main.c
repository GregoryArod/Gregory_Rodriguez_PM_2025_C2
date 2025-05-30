#include <stdio.h>
#include <stdlib.h>

/* incremento de precio.
el programa, al recibir como dato el precio del producto importado,
➥incrementa 11% el mismo si este es inferior a $1,500.
pre y npr: variable de tipo real. */

void main (void)
{
    float PRE, NPR;
    printf("ingrese el precio del producto:");
scanf("*%f", &PRE);
if (PRE > 1500)

    {


  NPR = PRE * 1.11;
  printf("\nNUEVO PRECIO: %7.2F" ,NPR);
 }
 }
