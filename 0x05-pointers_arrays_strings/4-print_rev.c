#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: the character
 *
 */

void print_rev(char *s)
{
	int x;
	int y = 0;

	for (y = x - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
