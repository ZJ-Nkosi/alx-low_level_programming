#include "main.h"

/**
 * puts_half - prints galf a string
 * @str: the string
 */

void puts_half(char *str)
{
	int i = 0;
	int j = 0;
	int k;

	while (str[i] != '\0')
	{
		i++;
	}

	k = i / 2;

	while (str[j] < k)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
