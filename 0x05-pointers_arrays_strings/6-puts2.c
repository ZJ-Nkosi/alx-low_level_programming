#include "main.h"

/**
 * puts2 - prints second char
 * @str: the string
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;

		if (i > 223)
		{
			break;
		}
	}
	_putchar('\n');
}
