                    
#include <unistd.h>

//void ft_putchar(char c) { write(STDOUT_FILENO, &c, 1); }
int        ft_putchar(char c){ write(STDOUT_FILENO, &c, 1); }
 
int        ft_putchar(char c);
 
void    ft_print_comb(void)
{
    int    allnumbers[3] = {48, 48, 48};
 
    while (allnumbers[0] <= 57)
    {
        if ((allnumbers[0] < allnumbers[1]) && (allnumbers[1] < allnumbers[2]))
        {
            ft_putchar(allnumbers[0]);
            ft_putchar(allnumbers[1]);
            ft_putchar(allnumbers[2]);
            if (allnumbers[0] != 55)
                ft_putchar(',');
            if (allnumbers[0] != 55)
                ft_putchar(' ');
        }
        if (allnumbers[2]++ >= 57)
        {
            allnumbers[2] = 48;
            allnumbers[1]++;
        }
        if (allnumbers[1] == 58)
        {
            allnumbers[1] = 48;
            allnumbers[0]++;
        }
    }
}
int main() {
   ft_print_comb();
  
}
 
