#include <unistd.h>
#include <stdlib.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb < 0)
    {
        ft_putchar('-');
        nb = nb * -1;
    }
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
    {
        ft_putchar('0' + nb);
    }
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(1, "Un et un seul argument", 22);
    }
    else
    {
            ft_putnbr(atoi(argv[1]));
    }
    return (0);
}