#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: operand
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 45 && c <= 57)
		return (1);
	else
		return (0);
}
