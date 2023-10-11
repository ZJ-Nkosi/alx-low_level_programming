#include "main.h"

/**
 * print_alphabet_x10 - printing the alphabet 10 times
 */

print_alpha();

void print_alphabet_x10(void)
{
	int j = 0;

	while (j < 10)
	{
		print_alpha();
		_putchar('\n');
		j++;
	}
}

void print_alpha(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++
	}
}
