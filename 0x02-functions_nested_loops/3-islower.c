#include "main.h"

/**
 * _islower - function
 *
 * @c: the parameter to check with
 *
 * return: function returns 1 if 'c' is lowercase and 0 if uppercase
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
