#include <unistd.h>
int        ft_putchar(char c){ write(STDOUT_FILENO, &c, 1); }
 

 
void    ft_putnbr(int nb)
{
    
    int    temp;
    int    size;
 
    size = 1;
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    temp = nb;
    while ((temp /= 10) > 0)
        size *= 10;
    temp = nb;
    while (size)
    {
        ft_putchar((char)((temp / size)) + 48);
        temp %= size;
        size /= 10;
    }
}
int main() {
   
    ft_putnbr(42);
}
