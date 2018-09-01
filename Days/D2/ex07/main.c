
#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

/*cette fonction permet de traiter la valeur et renvoi un string des valeur organiser sur n colones,
 elle renvoi 1 si elle ne peut plus continuer sinon elle renvoie 0*/
int wlf_process_value(char* storage, int value, int digits)
{

    return 0;
}

/*on affiche le string*/
void wlf_disp(char *storage, int digits)
{
    int compteur = 0;
    while(compteur <= digits)
    {
        ft_putchar(storage[compteur]);
        compteur++;
    }
}

void ft_print_combn(int n)
{
    char storage[n]; //on creer un tableau de n colonnes
    int value = 0; //on set la valeur de notre nombre
    int stop; //arret de la boucle

    while(!stop)
    {
        value++;
        stop = wlf_process_value(&storage[0], value, n);
        wlf_disp(&storage[0], n);
        if(!stop)
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
    } 
}

int main(int argc, char *argv[])
{
    ft_print_combn(atoi(argv[1]));
}