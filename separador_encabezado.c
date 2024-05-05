#include <stdio.h>
#include "formats.h"
#include <unistd.h>
#include "constants.h"

void separador_encabezado()
{
    for (int i = 0; i <= COLUMNAS; i++)
    {
        printf("----");
        if (i + 2 == COLUMNAS)
        {
            printf("-");
        }
    }
    printf("\n");
}