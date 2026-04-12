char *swap_cases(char *str)
{
	int len = 0;
	while (str[len])
		len++;
	len--;
	int i = 0;
	while (i < len)
	{
		char temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return str;
}