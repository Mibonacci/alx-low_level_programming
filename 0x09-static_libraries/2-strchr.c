#include "main.h"

/**
 * _strchr - function that locates character in a string
 * @s: String
 * @c: Character to search
 * Return: 0
 **/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		++s;
	}

	if (*s == c)
	{
		return (s);
	}
	return (0);
}
