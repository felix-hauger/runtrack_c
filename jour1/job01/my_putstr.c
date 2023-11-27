#include <unistd.h>

void my_putchar(char c);

void my_putstr(char *str)
{
    int i = 0;

    // Display the array of chars, one by one
    while (str[i] != 0) { 
        my_putchar(str[i]);
        ++i;
    }
}
