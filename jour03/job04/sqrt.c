#include <stdio.h>

int my_sqrt(int n)
{
    // Base cases
    if (n == 0 || n == 1)
        return n;
 
    printf("n: %d\n\n", n);

    // Starting from 1, try all numbers until
    // i*i is greater than or equal to n.
    int i = 1, result = 1;
    while (result <= n) {
        i++;
        result = i * i;
    }

    // Test if square root is strictly an integer
    if (n % i - 1 != 0)
        return 0;

    return i - 1;
}