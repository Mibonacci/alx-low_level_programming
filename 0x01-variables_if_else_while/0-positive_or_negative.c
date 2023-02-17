#include <stdlib.h>
#include <time.h>


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
	/* your code goes there */
	if (n > 0)
		printf("Positive\n", n);
	else
		printf("Negative\n", n);
	else if (n == 0)
		printf("zero\n", n);
	return (0);
}
