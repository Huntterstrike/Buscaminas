#include <stdio.h>
#include <stdlib.h>
#include "constants.h"

int seguir(char tablero[FILAS][COLUMNAS])
{
    char info_casilla;

    for (int i = 0; i < FILAS; i++) //Controlar si se acaba juego
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            info_casilla = tablero[i][j];
            if (info_casilla == CASILLA_VACIA)
            {
                return 0;
            }
        }
    }
    return 1;
}