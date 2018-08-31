#include <unistd.h>

<<<<<<< HEAD
void    ft_putchar(char c)
=======
void ft_putchar(char c)
>>>>>>> 66d9fbb4433596b3ac6ab5583ad303104d564f12
{
    write(1, &c, 1);
}

<<<<<<< HEAD
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
=======
void ft_print_comb2(void)
{
    /*C'est variables représentes les digits de deux nombre sous la forme 00 00*/
    int first_nbr = 0;
    int second_nbr = 0;
    int third_nrb = 0;
    int fourth_nrb = 0;

    /*tant que l valeur atteinte n'est pas 98 99*/
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
>>>>>>> 66d9fbb4433596b3ac6ab5583ad303104d564f12
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
<<<<<<< HEAD
=======
    return 0;
>>>>>>> 66d9fbb4433596b3ac6ab5583ad303104d564f12
}