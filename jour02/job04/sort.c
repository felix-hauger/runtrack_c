#include <stdio.h>

int my_strcmp(char *s1, char *s2);
void full_swap(void *a, void *b, int size);
int get_string_array_length(char **strings);


char **sort(char **strs)
{
    int array_length = get_string_array_length(strs);

    for (int i = 0; i < array_length; i++) {
        printf("i: %d\n", i);

        for (int j = 0; j < array_length - i - 1; j++) {
            printf("j: %d\n", j);
            int compare = my_strcmp(strs[j], strs[j+1]);
            printf("compare: %d\n", compare);

            if (compare == 1) {
                full_swap(&strs[j], &strs[j+1], sizeof(char*));
            }
        }
    }

    return strs;
}