#include "main.h"

/**
 * largest_number - give me the largest tacobell
 * @a: operand 1
 * @b: operand 2
 * @c: operand 3
 * Return: the giant one
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
