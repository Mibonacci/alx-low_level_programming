#include<stdio.h>

/**
 * main - entry point
 *
 * Description: printing reversed alphabet
 *
 * Return: 0
 */

int main(void)
{
	char X = 'z';

	while (X >= 'a')
	{
		putchar(X);
		--X;
	}
	putchar('\n');

	return (0);
}
