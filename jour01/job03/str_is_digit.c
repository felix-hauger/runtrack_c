int char_is_digit(char c);

int str_is_digit(char *string)
{
    int i = 0;

    while (string[i] != 0) {
        if (!char_is_digit(string[i])) return 0;

        i++;
    }

    return 1;
}