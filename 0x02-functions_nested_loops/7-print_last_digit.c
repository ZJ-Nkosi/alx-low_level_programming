#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: the integer
 * Return: i
 */

int print_last_digit(int i)
{
	_putchar(i % 10 + '0');
	return (i % 10);
}
