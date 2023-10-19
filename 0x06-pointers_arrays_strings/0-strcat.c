#include "main.h"

/**
 * *_strcat - concatenates 2 strings
 * @*dest: first string
 * @*src: second string
 */

char *_strcat(char *dest, char *src)
{
	char *concatenated = *dest + *src;
	return (*concatenated);
}
