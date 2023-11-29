int my_strcmp(char *s1, char *s2)
{
    int i = 0;

    // While the character is not null & both are equals
    while (s1[i] && s1[i] == s2[i]) {
        i++;
    }

    // When they are not equals, compare the values of the 2 ASCII
    int ret = s1[i] - s2[i];

    if (ret < 0) 
        ret = -1;

    else if (ret > 0)
        ret = 1;

    return ret;
}