// typedef unsigned char BYTE;
#include <stdint.h>

void swap(char **a, char **b)
{
    char *tmp = *a;

    **a = **b;
    **b = *tmp;
}

void full_swap(void *a, void *b, int size)
{
    uint8_t tmp[16];
    int i = 0;
    uint8_t *a2 = a;
    while (i < size) {
        tmp[i] = a2[i];
        ++i;
    }
    i = 0;
    uint8_t *b2 = b;
    while (i < size) {
        a2[i] = b2[i];
        ++i;
    }
    i = 0;
    while (i < size) {
        b2[i] = tmp[i];
        ++i;
    }
}