#include <stdio.h>
#include "formats.h"
#include <unistd.h>
#include "constants.h"
#include <ctype.h>
#include <assert.h>

int obtener_minas_cercanas(int fila, int columna, char tablero[FILAS][COLUMNAS])
{
    int filaInicio, filaFin, columnaInicio, columnaFin;
    int conteo = 0;
    if (fila <= 0)
    {
        filaInicio = 0;
    }
    else
    {
        filaInicio = fila - 1; 
    }
    if (fila + 1 >= FILAS)
    {
        filaFin = FILAS - 1;
    }
    else
    {
        filaFin = fila + 1;
    }
    if (columna <= 0)
    {
        columnaInicio = 0;
    }
    else
    {
        columnaInicio = columna - 1;
    }
    if (columna + 1 >= COLUMNAS)
    {
        columnaFin = COLUMNAS - 1;
    }
    else
    {
        columnaFin = columna + 1;
    }
    for (int i = filaInicio; i <= filaFin; i ++)
    {
        for (int j = columnaInicio; j <= columnaFin; j++)
        {
            if (tablero[i][j] == MINA)
            {
                conteo++;
            }
        }
    }
    return conteo;
}