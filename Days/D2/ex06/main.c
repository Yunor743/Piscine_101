<<<<<<< HEAD

=======
>>>>>>> 9221ee45335c8c5cb4344740d1785149842c8347
#include <unistd.h>
#include <stdlib.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

<<<<<<< HEAD
void ft_putnbr(int nb)
{
    if(nb < 2147483647 && nb > -2147483648)
    {
        int digits = 1;
        if(nb < 0)
        {
            ft_putchar('-');
            nb = nb * -1;
        }
        /*on obtient le nb de digit dans le nb*/
        while((nb / digits) > 9)
        {
            digits = digits * 10;
        }
        while(digits != 1)
        {
            ft_putchar(48 + (nb / digits));
            nb = nb % digits;
            digits = digits / 10;
        }
        ft_putchar(48 + (nb % 10));
    }
    else
    {

    }
}

int main(int argc, char *argv[])
{
    ft_putnbr(atoi(argv[1]));
    return 0;
=======
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
>>>>>>> 9221ee45335c8c5cb4344740d1785149842c8347
}