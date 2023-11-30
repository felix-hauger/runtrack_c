#include <stdio.h>

int my_atoi(char *str)
{
    int result = 0;

    // Iterate through all characters
    // of input string and update result
    // take ASCII character of corresponding digit and
    // subtract the code from '0' to get numerical
    // value and multiply res by 10 to shuffle
    // digits left to update running total
    for (int i = 0; str[i] != '\0' && str[i] >= '0' && str[i] <= '9'; i++) {
        result = result * 10 + str[i] - 48;
    }

    return result;
}