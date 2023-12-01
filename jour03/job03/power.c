#include <stdio.h>

int power(int n, int power)
{
    // Case for power 0
    if (power == 0)
        return 1;

    int i = 0;

    // Store the original value to make calculations
    int number = n;

    while (i < power - 1) {
        n *= number;
        printf("n: %d\n", n);

        i++;
    }

    return n;
}