#include <stdio.h>
#include "formats.h"
#include <unistd.h>
#include "rutinas.h"
#include "constants.h"

void mostrar_tablero(char tablero[FILAS][COLUMNAS], int minas)
{
    char letra = 'A';
    char verdadera_letra;
    char letra_actual;
    int minas_cercanas;

    encabezado();
    separador_encabezado();
    for (int i = 0; i < FILAS; i++)
    {
        printf("| %c ", letra);
        letra++;
        for (int j = 0; j < COLUMNAS; j++)
        {
            verdadera_letra = ESPACIO_SIN_DESCUBRIR;
            letra_actual = tablero[i][j];
            if (letra_actual == MINA) //Caso es mina
            {
                verdadera_letra = ESPACIO_SIN_DESCUBRIR;
            }
            else if (letra_actual == CASILLA_VACIA) //Caso no hay nada
            {
                minas_cercanas = obtener_minas_cercanas(i, j, tablero);
                verdadera_letra = entero_a_caracter(minas_cercanas);
            }
            //Si debug
            if (letra_actual == MINA && (DEBUG || minas))
            {
                verdadera_letra = MINA;
            }
            printf("| %c ", verdadera_letra);
            if (j + 1 == COLUMNAS) 
            {
                printf("|");
            }
        }
        printf("\n");
        imprimir_separador_filas();
    }
}