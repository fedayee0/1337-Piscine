#include <unistd.h>

int is_char_exist(char c, char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return 1;
		i++;
	}
	return 0;
}

int is_char_printed(char c, int i, char *str)
{
	int j = 0;
	while (i > j)
	{
		if(str[j] == c)
			return 1;
		j++;
	}
	return 0;
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int i = 0;
		while (av[1][i])
		{
			if ((is_char_exist(av[1][i], av[2]) == 1) 
			&& (is_char_printed(av[1][i], i, av[1]) == 0))
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}