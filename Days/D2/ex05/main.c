#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb2(void)
{
    /*C'est variables représentes les digits de deux nombre sous la forme 00 00*/
    int first_nbr = 0;
    int second_nbr = 0;
    int third_nrb = 0;
    int fourth_nrb = 0;

    /*tant que la valeur atteinte n'est pas 98 99*/
    while(first_nbr != 9 || second_nbr != 8 || third_nrb != 9 || fourth_nrb != 9)
    {
        /*Si le  LSB atteind la valeur 99 on incrémente le MSB*/
        if(third_nrb == 9 && fourth_nrb == 9)
        {
            /*On ajoute 1 au MSB*/
            second_nbr++;
            if(second_nbr > 9)
            {
            first_nbr++;
            second_nbr = 0;
            }
            third_nrb = 0;
            fourth_nrb = second_nbr;
        }
        /*gestion du LSB*/
        while(third_nrb != 9 || fourth_nrb != 9)
        {
            /*ajout de 1 au LSB*/
            fourth_nrb++;
            if(fourth_nrb > 9)
            {
                third_nrb++;
                fourth_nrb = 0;
            }
            /*on affiche*/
            ft_putchar(48 + first_nbr);
            ft_putchar(48 + second_nbr);
            ft_putchar(' ');
            ft_putchar(48 + third_nrb);
            ft_putchar(48 + fourth_nrb);
            /*si on la valeur est différente de 98 99 alors on affiche une virgule entre chaque valeur*/
            if(first_nbr != 9 || second_nbr!= 8 || third_nrb != 9 || fourth_nrb != 9)
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
    return 0;
}