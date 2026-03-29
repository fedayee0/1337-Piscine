#include <stdio.h>
char *swap_cases(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    int len = i-1;
    i = 0;
    while (i <= len)
    {
        char temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        i++;
        len--;
    }
    str[i+i] = '\0';
    return str;
}