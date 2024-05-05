#include <stdio.h>
#include <stdlib.h>
#include "formats.h"
#include <unistd.h>
#include "constants.h"
#include "rutinas.h"

int main()
{
    char tablero[FILAS][COLUMNAS];
    int deberia_mostrar_minas = 0;
    int columna;
    char fila;
    int status;

    printf(VERD NEGRETA "\tBUSCAMINAS\n" RESET);
    srand(getpid()); // Generara numeros alazar usando la semilla de l'ID del proceso devuelta por getid
    iniciar_tablero(tablero);
    colocar_minas(tablero);

    while (1)
    {
        mostrar_tablero(tablero, deberia_mostrar_minas);
        if (deberia_mostrar_minas == 1)
        {
            break;
        }
        printf("Ingresa la fila: ");
        scanf("%c", &fila);
        printf("Ingresa la columna: ");
        scanf("%d", &columna);
        //comrpvar informacion casilla seleccionada
        status = casilla_seleccionada(fila, columna, tablero);
        if(seguir(tablero)) //Caso has ganado
        {
            printf("Has ganado\n");
            deberia_mostrar_minas = 1;
        }
        else if(status == JUGADA_NO_VALIDA) //Caso que ya esta ocupada la casilla
        {
            printf("Casilla ya ocupada\n");
        }
        else if(status == MINA_ENCONTRADA) //Caso perder
        {
            printf("Has perdido\n");
            deberia_mostrar_minas = 1;
        }
        fflush(stdin); //Limpiamos la entrada 
    }
    return 0;
}