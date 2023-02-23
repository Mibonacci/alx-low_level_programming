#include "main.h"

/**
 * print_numbers - print from zero to nine
 */

void print_numbers(void)
{
	char x;

	for (x = '0'; x < '10'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
