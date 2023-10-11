#include "main.h"

/**
 *_islower - checks if letter is lowercase
 *Return: 0 or 1
 *c - the character
 */

int _islower(int c)
{
	if (c <= 'a' && c >= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
