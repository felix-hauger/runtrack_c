#include <stdlib.h>
#include <stdio.h>

char *my_strdup(char *src)
{
    char *str = (char*)malloc(sizeof(char) * (sizeof(src)));

    str = src;

    return str;
}