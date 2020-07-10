#include <unistd.h>

void ft_putchar(char c) { write(STDOUT_FILENO, &c, 1); }
 double n = 0;

void ft_is_negative(n)
{
   if (n < 0.0)
        ft_putchar('N');
    else if (n > 0.0)
       ft_putchar('P');
   

}
int main() {
  
    ft_is_negative(1);
    
    return 0;
}

