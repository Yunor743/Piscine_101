
#include <unistd.h>
#include <stdlib.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

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
}