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

int main(void) {
  ft_print_reverse_alphabet();
  return 0;
}

