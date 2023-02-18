#include<stdio.h>

/**
 * main - entry point
 *
 * Description: printing the alphabet lowercased and uppercased with putchar
 *
 * Return: 0
 */


int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			++ch;
		putchar(ch);
		++ch;
	}
	putchar('\n');

	return (0);
}
