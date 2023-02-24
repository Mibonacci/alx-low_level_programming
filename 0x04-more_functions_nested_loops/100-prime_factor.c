#include <stdio.h>

/**
 * main - what is the largest prime factor
 * Return: 0
 */

int main(void)
{
	long int n, X;

	n = 612852475143;
	for (X = 2; n >= X; X++)
	{
		if (n % X == 0)
		{
			n /= X;
			X--;
		}

	}
	printf("%ld\n", X);
	return (0);
}
