 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sintombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 08:30:14 by sintombe          #+#    #+#             */
/*   Updated: 2020/07/17 08:37:14 by sintombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int        ft_putchar(char c){ write(1, &c, 1); }
 

 
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

