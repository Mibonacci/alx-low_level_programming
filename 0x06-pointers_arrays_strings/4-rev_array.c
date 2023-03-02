#include "main.h"

/**
 * reverse_array - how to reverse an array of integers
 * @a: the array
 * @n: the size
 **/

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int swap;

	i = 0;
	j = n - 1;
	while (i < n / 2)
	{
		swap = a[i];
		a[i] = a[j];
		a[j] = swap;
		i++;
		j--;
	}
}

