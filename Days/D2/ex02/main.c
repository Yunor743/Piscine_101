#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_numbers(void)
{
    char alphabet;

    alphabet = '0';
    while(alphabet <= '9')
    {
        ft_putchar(alphabet);
        alphabet++;
    }
}
int main()
{
    ft_print_numbers();
}