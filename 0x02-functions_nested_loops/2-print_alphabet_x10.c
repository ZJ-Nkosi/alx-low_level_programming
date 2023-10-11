#include "main.h"

/**
 * void print_alphabet_x10(void) - printing the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int i = 97;
	int j = 0;

	for (j = 0; j < 10; j++)
	{
		while (i <= 122)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
	}
}
