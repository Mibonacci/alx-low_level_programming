#include <stdio.h>

/**
 * main - entry point
 *
 * Description: printing the alphabet lowercased with putchar
 *
 * Return: 0
 */


int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	putchar('\n');

	return (0);
}
