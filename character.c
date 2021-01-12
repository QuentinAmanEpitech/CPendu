#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "character.h"

void readChar(char *character)
{
    printf("Proposez une lettre: ");

    *character = getchar();
    *character = toupper(*character);

    while(getchar() != '\n');

}