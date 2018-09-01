
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
    int actual_digit = 0;
    int val_process[digits];
    int i = 0; //me servira de compteur

    /*On initialise tous les digits de notre tableau a 0*/
    while(i < digits)
    {
        val_process[i] = 0;
        i++;
    }
    
    while(value > 0)
    {
        val_process[actual_digit]++;
        value--;
        if(val_process[actual_digit] > 9)
        {
            actual_digit++;
            val_process[actual_digit]++;
            val_process[actual_digit-1] = val_process[actual_digit]+1;
            actual_digit = 0;
        }
    }
    
    /*On cast val_process vers storage*/
    i = 0;
    while(i < digits)
    {
        storage[i] = val_process[i]+48;
        i++;
    }
    /*on défini la valeur renvoyée*/
    if(val_process[0] < 10)   //condition a modifier
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

/*on affiche le string*/
void wlf_disp(char *storage, int digits)
{
    int compteur = digits - 1;
    while(compteur >= 0)
    {
        ft_putchar(storage[compteur]);
        compteur--;
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
        if(!stop && value > 1)
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
        if(!stop)
        {
            wlf_disp(&storage[0], n);
        }
    } 
}

int main(int argc, char *argv[])
{
    ft_print_combn(atoi(argv[1]));
}