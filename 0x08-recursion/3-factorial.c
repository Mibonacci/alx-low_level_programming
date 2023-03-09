#include "main.h"
/**
 *factorial - how to get the factorial of a number
 *@n: where to store the result
 *Return: the result
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));

}
