#include <unistd.h>
#include <stdlib.h>

/*This function allow you to write one character in the console*/
void ft_putchar(char c)
{
    write(1, &c, 1);
}

/*This function organize values in 'n' columns of an string,
it return 1 if it can't continue to execute, else it return 0*/
int wlf_process(char* storage, int value, int digits)
{
    int actual_digit = 0;       //the target digit
    int val_process[digits];    //to organize values
    int i = 0;                  //i use it for my counter

    /*We initialize all digits of the array to 0*/
    while(i < digits)
    {
        val_process[i] = 0;
        i++;
    }
    /*We store the values in different columns*/
    while(value > 0)
    {
        val_process[actual_digit]++;
        value--;
        while(val_process[actual_digit] > 9 - actual_digit)
        {
            actual_digit++;
            val_process[actual_digit]++;
        }
        while(actual_digit != 0)
        {
            val_process[actual_digit - 1] = val_process[actual_digit] + 1;
            actual_digit--;
        }
    }
    /*We cast val_process[] to storage[]*/
    i = 0;
    while(i < digits)
    {
        storage[i] = val_process[i]+48;
        i++;
    }
    /*We define the return value*/
    if(val_process[0] < 10)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void ft_print_combn(int n)
{
    if(n > 0 && n < 10)
    {
        char storage[n];    //my final string to disp
        int value = 0;      //the value of the number
        int stop = 0;       //stop the while when we have reach the last combination
        int counter;

        while(!stop)
        {
            /*for each iteration we increment value and we process it*/
            value++;
            stop = wlf_process(&storage[0], value, n);
            /*Disp ', ' but note the first and last time*/
            if(!stop && value > 1)
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
            /*Disp 'storage'*/
            if(!stop)
            {
                /*We start to disp the string by the end*/
                counter = n - 1;
                while(counter >= 0)
                {
                    ft_putchar(storage[counter]);
                    counter--;
                }
            }
        }
    }
}

int main(int argc, char *argv[])
{
    ft_print_combn(atoi(argv[1]));
}