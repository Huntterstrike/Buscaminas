#include "constants.h" 
#include "rutinas.h"
#include <stdio.h>

void encabezado()
{
    //Imprime el formato del encabezado
    separador_encabezado();
    printf("|  ");
    for (int i = 0; i < COLUMNAS; i++)
    {
        printf("| %d ", i + 1);
        if (i + 1 == COLUMNAS)
        {
            printf("|");
        }
    }
    printf("\n");
}