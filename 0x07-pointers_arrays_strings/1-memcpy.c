#include "main.h"
/**
 *_memcpy - copy adresses
 *@dest: to copy
 *@src: where is what to copy
 *@n: how many bytes do we have
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;

	}
	return (dest);
}
