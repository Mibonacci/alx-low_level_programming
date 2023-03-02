#include "main.h"

/**
 * string_toupper - how to convert lowercase to uppercase
 * @s: operand
 * Return: the uppercase
 **/

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] += 'A' - 'a';
		}
		i++;
	}
	return (s);
}
