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

int main(void) {
  ft_print_alphabet();
  return 0;
}