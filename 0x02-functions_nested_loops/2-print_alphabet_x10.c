#include "main.h"

/**
 * print_alphabet_x10 - printing the alphabet 10 times
 */


void print_alphabet_x10(void)
{
	int j = 0;
	int i;

	while (j < 10)
	{
		i = 97;

		while (i <= 122)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
