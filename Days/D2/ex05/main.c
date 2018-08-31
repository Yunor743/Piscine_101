#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_comb2(void)
{
    int one;
    int two;
    int tree;
    int four;

    one = 0;
    two = 0;
    tree = 0;
    four = 0;
    while (one != 9 || two != 8 || tree != 9 || four != 9)
    {
        if (tree == 9 && four == 9)
        {
            two++;
            if (two > 9)
            {
                one++;
                two = 0;
            }
            tree = 0;
            four = two;
        }
        while(tree != 9 || four != 9)
        {
            four++;
            if (four > 9)
            {
                tree++;
                four = 0;
            }
            ft_putchar('0' + one);
            ft_putchar('0' + two);
            ft_putchar(' ');
            ft_putchar('0' + tree);
            ft_putchar('0' + four);

            if (!((one == 9 && two == 8) && (tree == 9 && four == 9)))
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
        }
    }
}

int main()
{
    ft_print_comb2();
}