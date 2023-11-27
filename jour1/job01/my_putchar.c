#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
    // First arg is the output (1 is standard output)
    // Second arg is used to give the pointer (&) to the character
    // Third arg is the number of characters to display
}
