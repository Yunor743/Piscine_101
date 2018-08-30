#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_numbers(void)
{
    int number;

    number = 0;
    while(number <= 9)
    {
        ft_putchar(48 + number);
        number++;
    }
}
int main()
{
    ft_print_numbers();
}