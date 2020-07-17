/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sintombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 08:30:14 by sintombe          #+#    #+#             */
/*   Updated: 2020/07/17 08:37:14 by sintombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_putchar(char c){write(1,&c,1);}
void ft_print_numbers(int digit[], int count)
{
   int temp, n, u, m;
   while (u = 0 &&  u < count )
   {
      while (m = u + 1 &&  m < count)
      {
         while (digit[u] > digit[m])
         {
            temp = digit[u];
            digit[u] = digit[m];
            digit[m] = temp;
         }
		 
      }
	  m++;
   }
   u++;
   ft_putchar(digit[n]);
 }
