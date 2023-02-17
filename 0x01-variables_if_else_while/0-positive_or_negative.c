#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/* more headers goes there */
/**
 * main - entry point
 *
 * Description: Print positive or negative with conditions
 *
 * Return: 0
 */
/* betty style doc for function main goes there */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*my code*/
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);

	return (0);
}
