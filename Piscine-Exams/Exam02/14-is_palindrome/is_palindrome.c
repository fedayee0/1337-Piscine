#include <unistd.h>
int main(int ac, char **av)
{
	if (ac == 2)
	{
		int len = 0;
		int i = 0;
		int check = 0;
		while (av[1][len])
			len++;
		int slen = len - 1;
		while (slen > i)
		{
			if (av[1][slen] == av[1][i])
				check = 1;
			else
			{
				write(1, "\n", 1);
				return 0;
			}
			i++;
			slen--;
		}
		if(check == 1)
			write(1, av[1], len);
	}
	write(1, "\n", 1);
}