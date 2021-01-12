#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tries.h"
#include "character.h"
#include "word.h"

int main(int argc, char const *argv[])
{
    int tries = 0;
    char character = 0;
    char word[8] = "ELEMENT";
    char *foundWord = NULL;
    foundWord = malloc(strlen(word) * sizeof(char)); 

    if(foundWord == NULL) exit(0);

    startGame(&tries, 10);
    initiateFoundWord(foundWord, strlen(word));
    printf("Bienvenue dans le Pendu !\n");

    while (checkTries(tries) == 0)
    {
        printf("Il vous reste %d coups à jouer.\n\n", tries);
        printf("Quel est le mot secret ? %s\n", foundWord);
        readChar(&character);
        if(searchChar(character, word, foundWord) == -1) useTry(&tries);

        if(compareWords(word, foundWord) == 0) {
            printf("Bravo ! Vous avez gagné !");
            return 0;
        }
    }

    printf("Dommage, vous avez perdu.");

    free(foundWord);
    
    return 0;
}
