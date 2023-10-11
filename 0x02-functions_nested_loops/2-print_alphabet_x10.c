#include "main.h"

/**
 * print_alphabet_x10 - printing the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int i = 97;
	int j = 0;

	while (j < 10)
	{
		while (i <= 122)
		{
			_putchar(i);
			i++;
		}
		j++;
	}
}
