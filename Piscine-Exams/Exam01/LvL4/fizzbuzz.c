#include <unistd.h>

void    ft_putchar(char fdy)
{
    write(1, &fdy, 1);
}

void    ft_putnbr(unsigned int nb)
{
    if (nb > 9)
        ft_putnbr(nb / 10);
    ft_putchar(nb % 10 + '0');
}

int main(void)
{
    unsigned int i = 1;
    while (i <= 100)
    {
        if ((i % 4 == 0) && (i % 7 == 0))
            write(1, "fizzbazz\n", 9);
        else if (i % 4 == 0)
            write(1, "fizz\n", 5);
        else if (i % 7 == 0)
            write(1, "bazz\n", 5);
        else
        {
            ft_putnbr(i);
            write(1, "\n", 1);
        }
        i++;
    }
}