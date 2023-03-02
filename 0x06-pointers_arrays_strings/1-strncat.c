#include "main.h"

/**
 * *_strncat - similar to strcat but with limited number of n
 * @dest: first string
 * @src: second string
 * @n: the limit
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (dest[x])
		x++;
	dest[x] = ' ';
	while (src[y] && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = "\0";
	return (dest);
}
