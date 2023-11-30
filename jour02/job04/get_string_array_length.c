
int get_string_array_length(char **strings)
{
    int i = 0;

    while (strings[i] != 0) {
        i++;
    }

    return i;
}