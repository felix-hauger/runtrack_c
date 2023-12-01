#include <stdlib.h>

int count_digits(int n);

/*
Find the nb of digits
from the left
get the first digit
add equivalent from char to result string
get the next digit:
    to do so multiply the previous digit by the nb of 10^nb_digits
    remove the digit from the left (n = n - nb_digits * last_digit)
    reduce the nb of digits by 1
continue for nb of digits
*/
char *my_itoa(int n)
{
    // Get number of digits (eg: 7851 = 4)
    int nb_digits = count_digits(n);

    // Allocate from the number of digits
    char *result = (char*)malloc(sizeof(char) * nb_digits + 1);

    // To calculate the digits
    int digits = 1;

    int i = 0;

    // 10^(n-1) (eg: 3 digits = 100, 7 digits = 1 000 000)
    // To make calculations
    while (i < nb_digits - 1) {
        digits = digits * 10;
        i++;
    }

    // To insert the char at the right index of the result string
    int result_index = 0;

    while (n > 0) {
        // Get the current digit
        int current_digit = n / digits;

        // Insert the digit character from the ASCII table ('0' == 48)
        result[result_index] = current_digit + '0';

        result_index++;

        // Remove the current first digit of the original number
        n = n - current_digit * digits;

        // Reduce the number of digits
        digits = digits / 10;
    }

    // Insert 0 to flag the end of the string
    result[result_index] = 0;

    return result;
}