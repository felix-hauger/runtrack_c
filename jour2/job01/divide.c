#include <stdio.h>

// The function must be called with & before the param.
// This allows it to get the memory address of the variable.
void divide(int *val)
{
    // Call to the pointer to the value, this modifies
    // the original variable called as a parameter.
    *val = *val / 2;
}