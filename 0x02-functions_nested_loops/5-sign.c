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
		_putchar(45 + 0);
		return (-1);
	}
	else if (n > 0)
	{
		_putchar(0 + 48);
		return (1);
	}
	else
	{
		_putchar(43 + 0);
		return (0);
	}
}
