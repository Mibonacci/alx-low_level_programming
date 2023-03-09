#include "main.h"
/**
 *_print_rev_recursion - how to print a string in reverse
 *@s: where to store thestring to print
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
