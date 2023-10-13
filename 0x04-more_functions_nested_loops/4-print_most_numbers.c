#include "main.h"

/**
 * print_most_numbers - print 0-9, but not 2 and 4
 */

void print_most_numbers(void)
{
	int x = 0;

	while (x <= 9)
	{
		if (x == 2 || x == 4)
		{
			continue
		}
		else
		{
			_putchar(x);
			x++;
		}
	}
	_putchar('\n');
}
