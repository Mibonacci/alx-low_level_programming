#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: parameter
 *
 */

void puts_half(char *str)
{
	int c = 0;
	int i;

	while (str[c] != '\0')
		c++;

	if (c + 1 % 2 != '0')
		i = (c - 1) / 2;
	else
		i = c / 2;

	i++;

	for (c = i; str[c] != '\0'; c++)
		_putchar(str[c]);
	_putchar('\n');
}
