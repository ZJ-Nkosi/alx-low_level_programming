#include "main.h"

/**
 *_islower - checks if letter is lowercase
 *Return: 0 or 1
 *c - the character
 */

int _islower(int c)
{
	if (c <= 65 && c >= 90)
	{
		return (0);
	}
	else if (c <= 97 && c >= 122)
	{
		return (1);
	}
	else
	{
		return (988);
	}
}
