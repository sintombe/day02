
#include <unistd.h>

void ft_putchar(char c) { write(STDOUT_FILENO, &c, 1); }

void    ft_print_combn(int n)
{
    int tab[n];
    int count;
 
    count = 0;
    if (n == 1)
    {
        while (count < 10)
        {
            ft_putchar(count + '0');
            if (count < 9)
                ft_putchar(',');
            if (count < 9)
                ft_putchar(' ');
            count++;
        }
    }
    else
    {
        while (count < n)
        {
            tab[count] = count;
            count++;
        }
    
    }
}

