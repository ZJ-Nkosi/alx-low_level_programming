#include "main.h"


/**
 * _islower - checks if letter is lowercase
 * @c: the charecter
 * Return: 0 or 1
 */

int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
