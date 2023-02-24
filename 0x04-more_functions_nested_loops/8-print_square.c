#include "main.h"

/**
 * print_square - print squares
 * @size: helper
 *
 */

void print_square(int size)
{
	int x, y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; j++)
		{
			_putchar(35);
		}
		if (x != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
