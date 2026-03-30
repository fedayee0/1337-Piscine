int	ft_atoi(char *str)
{
    int i = 0;
    int sign = 0;
    int number = 0;

    while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign++;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        number = number * 10;
        number = (str[i] - '0') + number;
        i++;
    }
    if (sign % 2 == 0)
        return number;
    else
        return -number;    
}