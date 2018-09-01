/*
standart function allowed:
exit, open, close, write, read, malloc, free
*/
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

/*load the file of the name in parameter and return a raw map of the bsd*/
char** wlf_load(char* loadfile, char* characters)
{

}
/*it will find the bigger square in the raw map, store the length and store the top left position of the found square*/
void wlf_find(int* x, int* y, int* l, char** map, char* characters)
{

}
/*it will reverse all 'empty character' to 'full character' in the found square*/
void wlf_fill(int* x, int* y, int* l, char** map, char* characters)
{

}
/*save the map in a file*/
void wlf_save(char** map, char* savefile)
{

}

int main(int argc, char *argv[])
{
    /*coordonate X & Y which target the top left corner of the research square*/
    int x;
    int y;
    /*length of the square*/
    int l;
    /*map*/
    char** map;
    /*list of all posible characters in the map which are [void][obstacle][full]*/
    char characters[3];
    /*name of the file to load*/
    char loadfile[] = "map";
    /*name of the file to save*/
    char savefile[] = "fmap";

}