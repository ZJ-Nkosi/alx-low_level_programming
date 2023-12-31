#include "main.h"

/**
 * _strncpy - copies
 * @dest: argument one
 * @src: argument two
 * @n: number
 * Return: a char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\n'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
