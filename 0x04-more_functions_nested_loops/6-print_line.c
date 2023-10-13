#include "main.h"

/**
 * print_line - draws a line
 * @x: line length
 */

void print_line(int x)
{
	if (x <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 1;

		while (i <= x)
        	{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}

