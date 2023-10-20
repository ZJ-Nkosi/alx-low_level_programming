#include "main.h"

/**
 * *_strncat - concats 2 strings
 * @*dest: firsts
 * @*src: second
 * Return: concatenation
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int length = 0;

	while (dest[i++])
	{
		length++;
	}

	while (src[i] && i < n)
	{
		dest[length++] = src[i];
	}

	return (dest);
}
