#include "main.h"
/**
 *_pow_recursion - x power to y
 *@x: first var
 *@y: second var
 *Return: the result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
