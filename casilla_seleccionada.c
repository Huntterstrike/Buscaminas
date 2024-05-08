#include <stdio.h>
#include "formats.h"
#include <unistd.h>
#include "constants.h"
#include <ctype.h>
#include <assert.h>

int casilla_seleccionada(char fila, int columna, char tablero[FILAS][COLUMNAS])
{
    int fila_entero;

    fila = toupper(fila); //Pasa de minusculas a mayusculas
    columna--; //Empieza desde 0 
    fila_entero = (int) fila - 'A';
    //Comprovamos entradas correctas sino nos devolvera mensaje
    assert (columna < COLUMNAS && columna >= 0);
    assert (fila_entero < FILAS && fila_entero >= 0);
    if (tablero[fila_entero][columna] == MINA) //Caso dar a la mina
    {
        return MINA_ENCONTRADA;
    }
    else if (tablero[fila_entero][columna] == CASILLA_VACIA) //Caso casilla ya usada
    {
        return JUGADA_NO_VALIDA;
    }
    else
    {
        tablero[fila_entero][columna] = CASILLA_VACIA; //Caso casilla que no es mina
        return  ERROR_NINGUNO;
    }
}