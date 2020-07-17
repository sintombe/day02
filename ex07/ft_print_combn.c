 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sintombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 08:30:14 by sintombe          #+#    #+#             */
/*   Updated: 2020/07/17 08:37:14 by sintombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c) { write(1, &c, 1); }

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

