#include <stdio.h>
/**
 * main - printing 1 - 9 basically
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar((char)i);
		putchar((char)",");
		putchar((char)" ");
	}
	putchar("\n");
	return (0);
}
