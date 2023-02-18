#include <stdio.h>

/**
 * main - entry point
 *
 * Description: printing all the digits from base ten with putchar
 *
 * Return: 0
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCII representation*/
		putchar(digit + '0');
		++digit;
	}
	putchar('\n');

	return (0);
}
