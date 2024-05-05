#include <stdio.h>
#include <stdlib.h>
#include "formats.h"
#include <unistd.h>
#include "constants.h"
#include <ctype.h>
#include <assert.h>

int aleatorio_en_rango(int minimo, int maximo)
{
    return minimo + rand()/ (RAND_MAX / (maximo - minimo + 1) + 1); //Numero pseudoaleatori
}