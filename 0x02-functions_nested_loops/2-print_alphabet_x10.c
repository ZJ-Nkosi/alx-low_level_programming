#include "main.h"

/**
 * print_alphabet_x10 - printing the alphabet 10 times
 */


void print_alphabet_x10(void)
{
	int j = 0;
	int i = 97;

	do
	{
		while (i <= 122)
		{
			_putchar(i);
			i++;
		}
		j++;
	}
	while (j < 10)
}
