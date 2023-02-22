#include "main.h"

/**
 * _islower - function
 *
 * @c: the parameter to check with
 *
 * Return: function returns 1 if c is lowercase. otherwize 0
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
