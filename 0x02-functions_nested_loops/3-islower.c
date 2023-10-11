#include "main.h"

/**
 *_islower - checks if letter is lowercase
 */

int _islower(int c)
{
	if (c <= 65 && c >= 90)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
