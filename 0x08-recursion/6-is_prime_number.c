#include "main.h"

/**
 *evaluate_num - testing the conditions of prime numbers
 *@num: input
 *@iterator: operand
 *Return: depends on result
 */

int evaluate_num(int num, int iterator)
{

	if (iterator == num - 1)
	{
		return (1);
	}

	else if (num % iterator == 0)
	{
		return (0);
	}

	if (num % iterator != 0)
	{
		return (evaluate_num(num, iterator + 1));
	}

return (0);
}

/**
 *is_prime_number - the result
 *@num: input
 *Return: 1 si pair 0 si impair
 */

int is_prime_number(int num)
{

	int iterator;

	iterator = 2;
	if (num < 2)
	{
		return (0);
	}

	if (num == 2)
	{
		return (1);
	}

return (evaluate_num(num, iterator));
}
