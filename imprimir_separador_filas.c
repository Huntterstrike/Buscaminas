#include <stdio.h>
#include "formats.h"
#include <unistd.h>
#include "constants.h"

void imprimir_separador_filas()
{
    for (int i = 0; i <= COLUMNAS; i++)
    {
        printf("+---");
        if (i == COLUMNAS)
        {
            printf("+");
        }
    }
    printf("\n");
}