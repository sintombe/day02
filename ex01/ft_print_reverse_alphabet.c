/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sintombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 08:28:54 by sintombe          #+#    #+#             */
/*   Updated: 2020/07/17 08:29:24 by sintombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char r) { write(STDOUT_FILENO, &r, 1); }

void ft_print_reverse_alphabet(void) {
  char alphabet;

  alphabet = 'z';
  while (alphabet >= 'a') {
    ft_putchar(alphabet);
    alphabet--;
  }
}


