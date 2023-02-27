#include "main.h"

/**
 * swap_int - function that swaps values of 2 integers
 * @a: parameter one
 * @b: parameter two
 * return: zero
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
