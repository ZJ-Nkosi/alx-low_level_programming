#include "main.h"

/**
 * main - printing the alphabet with only putchar
 * Return: 0
 */

void print_alphabet(void)
{
	int i = 97;
	while(i <= 122)
	{
		_putchar(i);
		_putchar('\n');
		i++;
	}
}
