#include "main.h"
/**
 *_memset - how to fill the memory blocks with constants
 *@s: pointer block of memory to fill
 *@b: value to set
 *@n: bytes of the memory
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;

	}

	return (s);
}
