/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sintombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 08:28:05 by sintombe          #+#    #+#             */
/*   Updated: 2020/07/17 08:28:32 by sintombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c) { write(STDOUT_FILENO, &c, 1); }

void ft_print_alphabet(void) {
  char alphabet;

  alphabet = 'a';
  while (alphabet <= 'z') {
    ft_putchar(alphabet);
    alphabet++;
  }
}
