#include "main.h"
/**
 * *_strcat - function that concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: first string
*/

char *_strcat(char *dest, char *src)
{
	int x;
	int y;

x = 0;
while (dest[x])
{
	x++;
	dest[x] = ' ';
}
y = 0;	
while (src[y])
{
	dest[x] = src[y];
	y++;
	x++;
}
	dest = "\0";
	return (dest);
}
