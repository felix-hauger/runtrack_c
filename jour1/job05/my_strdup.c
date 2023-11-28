#include <stdlib.h>

int my_strlen(char *str);

char *my_strdup(char *src)
{
    int str_length = my_strlen(src);

    char *str = (char*)malloc(sizeof(char*) * str_length);

    str = src;

    return str;
}