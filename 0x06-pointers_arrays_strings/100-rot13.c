#include "main.h"

/**
 * rot13 - rotate by 13 places 'Caesar Cipher'
 * @s: the string to convert
 * Return: the converted string
 **/

char *rot13(char *s)
{
	int i;
	int j;

	char *first = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *second = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	i = 0;

	while (s[i])
	{
		j = 0;
		while (second[j])
		{
			if (second[j] == s[i])
			{
				s[i] = first[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
