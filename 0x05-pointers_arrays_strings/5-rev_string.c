#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: parameter
 *
 */

void rev_string(char *s)
{
	int c = 0;
	int i, j;
	char ch;

	while (c >= 0)
	{
		if (s[c] == '\0')
		{
			break;
		}
		else
		{
			c++;
		}
	}

	j = c - 1;

	for (i = 0; j >= 0 && i < j; i++, j--)
	{
		ch = s[i];
		s[i] = s[j];
		s[j] = ch;
	}
}
