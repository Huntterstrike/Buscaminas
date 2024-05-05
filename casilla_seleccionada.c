#include <stdio.h>
#include "formats.h"
#include <unistd.h>
#include "constants.h"
#include <ctype.h>
#include <assert.h>

int casilla_seleccionada(char fila, int columna, char tablero[FILAS][COLUMNAS])
{
    int fila_indice;
    
    fila = toupper(fila_indice);
    columna--; //Empieza desde 0 
    fila_indice = fila - 'A';
    //Comprovamos entradas correctas sino nos devolvera mensaje
    assert (columna < COLUMNAS && columna >= 0);
    assert (fila < FILAS && fila >= 0);
    if (tablero[fila][columna] == MINA) //Caso dar a la mina
    {
        return MINA_ENCONTRADA;
    }
    else if (tablero[fila][columna] == CASILLA_VACIA) //Caso casilla ya usada
    {
        return JUGADA_NO_VALIDA;
    }
    else
    {
        tablero[fila][columna] = CASILLA_VACIA; //Caso casilla que no es mina
        return  ERROR_NINGUNO;
    }
}