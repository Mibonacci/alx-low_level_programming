#include "main.h"

/**
 * print_sign - function
 *
 * @n: the parameter to check with
 *
 * Return: returns 1 if positive and -1 if negative otherwise 0
 */

int print_sign(int n)
{
	if (n < 0)
	{
		return (-1);
		_putchar(45 + 0);
	}
	else if (n > 0)
	{
		return (1);
		_putchar(0 + 43);
	}
	else
	{
		return (0);
		_putchar(0 + 48);
	}
}
