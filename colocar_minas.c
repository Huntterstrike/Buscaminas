#include <stdio.h>
#include "formats.h"
#include <unistd.h>
#include "constants.h"
#include "rutinas.h"

void colocar_minas(char tablero[FILAS][COLUMNAS])
{
    int fila;
    int columna;

    for (int i = 0; i < CANTIDAD_MINAS; i++)
    {
        fila = aleatorio_en_rango(0, FILAS - 1); //Fila aleatoria
        columna = aleatorio_en_rango(0, COLUMNAS - 1); //Columna aleatoria
        colocar_mina(fila, columna, tablero);
    }
}