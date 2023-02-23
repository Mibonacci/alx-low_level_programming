#include "main.h"

/**
 * print_most_numbers - print all numbers except 2 and 4
 *
 */

void print_most_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		if (x != 50 && x != 52)
		_putchar(x);
	}
	_putchar('\n');
}
