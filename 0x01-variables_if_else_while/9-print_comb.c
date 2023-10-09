#include <stdio.h>
/**
 * main - printing 1 - 9 basically
 * Return: 0
 */

int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
