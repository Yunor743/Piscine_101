
#include <unistd.h>

<<<<<<< HEAD
void ft_print_alphabet(void)
{

}

=======
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_alphabet(void)
{
    char alphabet;

    alphabet = 'a';
    while(alphabet <= 'z')
    {
        ft
    }
}
>>>>>>> 01c1973ab8838a862574d4ba77b9139ef7f295bf
int main()
{
    ft_print_alphabet();
}