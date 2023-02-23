#include "main.h"
/**
 * more_numbers - print 10 times the numbers
 *
 */

void more_numbers(void)
{
	int  x, y;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x >= 10)
				_putchar('1');
			_putchar (x % 10 + '0');
		}
	_putchar('\n');
	}
}
