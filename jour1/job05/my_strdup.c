#include <stdlib.h>

int my_strlen(char *str);
char *my_strcpy(char *dest, char *src);

char *my_strdup(char *src)
{
    int str_length = my_strlen(src);

    char *str = (char*)malloc(sizeof(char*) * str_length);

    my_strcpy(str, src);

    return str;
}