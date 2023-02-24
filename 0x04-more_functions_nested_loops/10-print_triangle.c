#include "main.h"

/**
 * print_triangle - printing a triangle
 * @size: helper
 */

void print_triangle(int size)
{
	int x, y;

	for (x = 0; x < size; x++)
	{
		for (y = 1; y < (size - x); y++)
			_putchar(' ');
		for (y--; y < size; y++)
			_putchar(35);
		if (x < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
