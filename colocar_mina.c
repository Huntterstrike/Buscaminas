#include <stdio.h>
#include "formats.h"
#include <unistd.h>
#include "constants.h"

void colocar_mina(int fila, int columna, char tablero[FILAS][COLUMNAS])
{
    tablero[fila][columna] = MINA;
}