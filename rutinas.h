#ifndef rutinas_h
#define rutinas_h

#include "constants.h"

/**
 * @brief Separa las columnas en un formato especifico
 */
void separador_encabezado();

/**
 * @brief Controla fin juego
 * @param tablero matriz bidimensional de tamaño FILAS * COLUMNAS dond se guarda el tablero
 * @return devuelve final o no del juego
 */
int seguir(char tablero[FILAS][COLUMNAS]);

/**
 * @brief Comprueva bombas al alrededor
 * @param fila fila seleccionada
 * @param columna columna seleccionada
 * @param tablero matriz bidimensional de tamaño FILAS * COLUMNAS dond se guarda el tablero
 * @return devuelve el numero de minas cercanas
 */
int obtener_minas_cercanas(int fila, int columna, char tablero[FILAS][COLUMNAS]);

/**
 * @brief Muestra tablero cada jugada
 * @param tablero matriz bidimensional de tamaño FILAS * COLUMNAS dond se guarda el tablero
 * @param minas numero minas
 */
void mostrar_tablero(char tablero[FILAS][COLUMNAS], int minas);

/**
 * @brief Prepara el tablero inicial
 * @param tablero matriz bidimensional de tamaño FILAS * COLUMNAS dond se guarda el tablero
 */
void iniciar_tablero(char tablero[FILAS][COLUMNAS]);

/**
 * @brief Separa las filas en un formato especifico
 */
void imprimir_separador_filas();

/**
 * @brief Transforma entero a carcater
 * @param numero numero a transformar
 * @return devuelve el numero transformado
 */
char entero_a_caracter(int numero);

/**
 * @brief Imprime el encabezado de la tabla
 */
void encabezado();

/**
 * @brief Coloca les mines
 * @param tablero matriz bidimensional de tamaño FILAS * COLUMNAS dond se guarda el tablero
 */
void colocar_minas(char tablero[FILAS][COLUMNAS]);

/**
 * @brief Coloca las minas en la matriz
 * @param fila fila donde se situa la mina
 * @param columna columna donde se situa la mina
 * @param tablero matriz bidimensional de tamaño FILAS * COLUMNAS dond se guarda el tablero
 */
void colocar_mina(int fila, int columna, char tablero[FILAS][COLUMNAS]);

/**
 * @brief Controla la jugada
 * @param fila fila seleccionada
 * @param columna columna seleccionada
 * @param tablero matriz bidimensional de tamaño FILAS * COLUMNAS dond se guarda el tablero
 * @return devuelve si ha encontrado mina no o ya hay algo en la casilla
 */
int casilla_seleccionada(char fila, int columna, char tablero[FILAS][COLUMNAS]);

/**
 * @brief Genera un numero pseudoaleatorio
 */
int aleatorio_en_rango(int minimo, int maximo);

#endif /* rutinas_h */