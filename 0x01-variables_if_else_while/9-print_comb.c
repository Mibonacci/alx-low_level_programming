#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: printing the base 16 in lowercase
 *
 * Return: 0
*/

int main(void)
{
	int X = 0;

	while (X <= 9)
	{
		putchar(X + 48);

		if (X != 9)
		{
			putchar(',');
			putchar(' ');
		}

		++X;
	}
	putchar('\n');

	return (0);
}
