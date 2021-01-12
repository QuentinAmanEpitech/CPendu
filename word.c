#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "word.h"
#include "tries.h"

void initiateFoundWord(char foundWord[], int length)
{
    for (int i = 0; i < length; i++)
    {
        foundWord[i] = '*'; 
    }
}

int searchChar(char letter, char word[], char foundWord[])
{
    int hasFound = -1;
    for (int i = 0; i < strlen(word); i++)
    {
        if(word[i] == letter) 
        {
            foundWord[i] = letter;
            hasFound = 0;
        }
    }

    return hasFound;
}

int compareWords(char word[], char foundWord[])
{
    return strcmp(word, foundWord);
}