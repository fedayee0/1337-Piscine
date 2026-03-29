#include <unistd.h>
int main(int ac, char **av)
{
    if (ac != 1)
    {
        int i = 0;
        int j = 1;
        while (j <= ac - 1)
        {
            i = 0;
            while (av[j][i])
            {
                if (i % 3 == 0 && i % 5 == 0)
                    write(1, "5", 1);
                else  if (i % 3 == 0)
                    write(1, "5", 1);
                else if (i % 5 == 0)
                    write(1, "3", 1);
                else 
                    write(1, &av[j][i], 1);
                write(1, "\n", 1);
                i++;
            }
            if (j != ac - 1)
                write(1, "-----\n", 6); // I just add this Bruh
            j++;
        }
    }
    else
       write(1, "\n", 1); 
}