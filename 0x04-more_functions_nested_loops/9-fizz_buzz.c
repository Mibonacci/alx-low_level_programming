#include<stdio.h>

/**
 * main - print fizz and buzz with conditions
 * Return: zero
 */

int main(void)
{
	int n;

	n = 1;
	printf("%d", n);
	for (n = 2; n <= 100; n++)
		/**general condition*/
	{
		if ((n % 3 == 0) && (n % 5 == 0))
			/**the contion for fizz and buzz*/
		{
			printf(" FizzBuzz");
		}
		else if (n % 3 == 0)
			/**the contion for fizz */
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0)
			/**the contion for buzz*/
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", n);
		}
	}
	printf("\n");
	return (0);
}
