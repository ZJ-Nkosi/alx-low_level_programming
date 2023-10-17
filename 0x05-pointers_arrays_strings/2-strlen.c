#include "main.h"

/**
 * _strlen - prints length
 * @s: the string
 * Return: the length
 */

int _strlen(char *s)
{
	int len = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
