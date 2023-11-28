int my_strcmp(char *s1, char *s2)
{
    int i = 0;

    int togo = sizeof(s1) > sizeof(s2) ? sizeof(1) : sizeof(2);

    while (i < togo) {
        if (s1[i] > s2[i]) {
            return 1;
        } else if (s1[i] < s2[i]) {
            return -1;
        }
        i++;
    }

    return 0;
}