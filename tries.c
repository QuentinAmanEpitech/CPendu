#include <stdio.h>
#include <stdlib.h>
#include "tries.h"

void useTry(int *tries)
{
    *tries -= 1;
}

void startGame(int *tries, int nbTries)
{
    *tries = nbTries;
}

int checkTries(int tries)
{
    if(tries <= 0) return -1;
    else return 0;
}