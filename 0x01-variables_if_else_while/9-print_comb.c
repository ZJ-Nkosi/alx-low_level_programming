#include <stdio.h>
/**
 * main - printing 1 - 9 basically
 * Return: 0
 */

int main(void)
{
	int i = 48;
	int j = 0;

	while (i <= 57)
	{
		putchar(i);
		if (j < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
		j++;
	}
	putchar('\n');
	return (0);
}
