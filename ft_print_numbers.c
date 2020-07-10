#include <stdio.h>

void ft_print_numbers(int digit[], int count)
{
   int temp, n, u, m;
   for (u = 0; u < count; ++u)
   {
      for (m = u + 1; m < count; ++m)
      {
         if (digit[u] > digit[m])
         {
            temp = digit[u];
            digit[u] = digit[m];
            digit[m] = temp;
         }
      }
   }
   printf("Numbers in ascending order:\n");
   for (n = 0; n < count; ++n)
      printf("%d\n", digit[n]);
}
void main()
{
   int n, count, digit[100];
 
   printf("How many numbers you are gonna enter:");
   scanf("%d", &count);
   printf("\nEnter the numbers one by one:");
   
   for (n = 0; n < count; ++n)
      scanf("%d", &digit[n]);
 
   ft_print_numbers(digit, count);
}
