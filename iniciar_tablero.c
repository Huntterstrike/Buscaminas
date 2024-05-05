#include <stdio.h>
#include "formats.h"
#include <unistd.h>
#include "constants.h"

void iniciar_tablero(char tablero[FILAS][COLUMNAS])
{
    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            tablero[i][j] = ESPACIO_SIN_DESCUBRIR;
        }
    }
}