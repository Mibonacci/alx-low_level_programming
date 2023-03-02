#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: the difference between the two strings
 */

int _strcmp(char *s1, char *s2)
{
	char *x = s1;
	char *y = s2;

	for (*x != '\0' && *y != '\0' && *x == *y)
	{
		x++;
		y++;
	}
	return(*x - *y);
}
