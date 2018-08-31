

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb (void)
{
    int first_digit = 0;
    int second_digit = first_digit + 1;
    int third_digit = second_digit + 1;
    
    while(first_digit <= 7)
    {
        while(second_digit <= 8)
        {
            while(third_digit <= 9)
            {
                /*On affiche*/
                ft_putchar(48 + first_digit);
                ft_putchar(48 + second_digit);
                ft_putchar(48 + third_digit);
                if(!(first_digit == 7 && second_digit == 8 && third_digit == 9))
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                third_digit = third_digit + 1;
            }
            second_digit = second_digit + 1;
            third_digit = second_digit + 1;
        }
        first_digit = first_digit + 1;
        second_digit = first_digit + 1;
        third_digit = second_digit + 1;
    }
}

int main()
{
    ft_print_comb();
    return 0;
}