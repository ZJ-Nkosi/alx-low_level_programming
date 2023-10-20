#include "main.h"

/**
 * *_strncat - concats strings
 * @dest: firsts
 * @n: number
 * @src: second
 * Return: concatenation
 */

char *_strncat(char *dest, char *src, int n)
{
	int length;
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (length = 0; length < n && src[length] != '\0'; length++)
	{
		dest[i] = src[length];
		i++;

	}
	dest[i] = '\0';
	return (dest);
}
