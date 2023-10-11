#include "main.h"

/**
 *_islower - checks if letter is lowercase
 */

int _islower(int c)
{
	int i;
	i = islower(c);
	if (i == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
