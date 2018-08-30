#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_comb(void)
{
    int one;
    int two;
    int tree;

    one = 0;
    two = 1;
    tree = 2;

    while (one <= 7)
    {
        while (two <= 8)
        {
            while(tree <= 9)
            {
                ft_putchar('0' + one);
                ft_putchar('0' + two);
                ft_putchar('0' + tree);
                if (!(one == 7 && two == 8 && tree == 9))
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                tree++;
            }
            tree = two + 1;
            tree++;
            two++;
        }
        two = one + 1;
        one++;
    }
}
int main(void)
{
    ft_print_comb();
}