#include "main.h"

/**
 * print_sign - print the sign of numbers
 * @n: the number that is being tested
 *
 * Return: 0 is sucess and 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
