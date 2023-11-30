#include <stdlib.h>
#include <stdio.h>

char *my_strdup(char *src);

// Vous devez implémenter la fonction array_clone (dans un fichier array_clone.c) qui doit
// prendre en paramètre un tableau de chaînes de caractères, et un int n. Elle devra
// renvoyer un tableau de chaîne de caractères qui contient des copies des chaînes de
// caractères du tableau entrant, jusqu’à la nième, ou jusqu’au premier pointeur NULL
// présent. Le tableau sortant devra se terminer par un pointeur NULL.
char **array_clone(char **strs, int n)
{
    char **strs_clone = (char**) malloc(sizeof(char*) * n);

    int i = 0;

    while (i < n && strs[i] != 0) {
        strs_clone[i] = my_strdup(strs[i]);

        i++;
    }

    strs_clone[i] = 0;

    return strs_clone;
}