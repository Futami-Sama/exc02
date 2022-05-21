#include <unistd.h>

int  ft_putchar(char c)
{
    write(0, &c, 1);
}

void ft_print_numbers(void)
{
    char letter;

    letter = '0';
    while (letter <= '9')
      ft_putchar(letter++);
}

void main(void)
{
    ft_print_numbers();
}