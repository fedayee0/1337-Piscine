int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}
unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int destlen = ft_strlen(dest);
    unsigned int srclen = ft_strlen(src);
    unsigned int total_len = destlen + srclen;
    unsigned int i;

    if (destlen >= size)
    {
        return total_len;
    }
    i = 0;
    while (src[i] && destlen + i < size - 1)
    {
        dest[destlen + i] = src[i];
        i++;
    }
    dest[destlen + i] = '\0';
    return total_len;
}