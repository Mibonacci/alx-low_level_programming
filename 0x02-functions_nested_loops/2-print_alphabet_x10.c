#include "main.h"
/**
 * print_alphabet - printing the alphabet without header
 * print_alphabet_x10 - printing the alphabet in 10 lines
 *
*/

void print_alphabet(void)
{
        int x, y;

	for (y = 0; y <= 9; y++)
	{
		for (x = 'a'; x <= 'z'; x++)
                _putchar(x);
        _putchar('\n');
	}
}
