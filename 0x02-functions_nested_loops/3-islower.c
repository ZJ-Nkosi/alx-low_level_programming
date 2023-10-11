#include "main.h"

/**
 *_islower - checks if letter is lowercase
 *Return: 0 or 1
 *c - the character
 */

int _islower(int c)
{
	if (c <= 97 && c >= 122)
	{
		_putchar((int)c);
		return (1);
	}
	else
	{
		_putchar((int)c);
		return (0);
	}
}
