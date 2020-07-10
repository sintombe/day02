#include <unistd.h>

//void ft_putchar(char c) { write(STDOUT_FILENO, &c, 1); }
int        ft_putchar(char c){ write(STDOUT_FILENO, &c, 1); }
 
void    ft_print_comb2(void)
{
    char    digits[4] = {0, 0, 0, 1};
 
    while (!((digits[0] == 9) && (digits[1] == 9)))
    {
        ft_putchar(digits[0] + 48);
        ft_putchar(digits[1] + 48);
        ft_putchar(' ');
        ft_putchar(digits[2] + 48);
        ft_putchar(digits[3] + 48);
        if (!((digits[0] == 9) && (digits[1] == 8)))
            ft_putchar(',');
        if (!((digits[0] == 9) && (digits[1] == 8)))
            ft_putchar(' ');
        digits[3]++;
        if ((digits[3] = digits[3] % 10) == 0)
            digits[2] = (digits[2] + 1);
        if (digits[2] == 10)
        {
            digits[2] = digits[0];
            digits[1]++;
            if ((digits[1] = digits[1] % 10) == 0)
                digits[0]++;
            digits[3] = digits[1] + 1;
        }
    }
}
 







 
int main() {
  ft_print_comb2();
  
}
 
