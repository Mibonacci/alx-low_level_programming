#include "main.h"

/**
* main - Entry point
*
* Description: printing putchar without standard libraries
*
* Return: 0
*/

int main(void)
{
	char arr[] = "_putchar";
	char x = 0;

	while (x < 8)
	{
		_putchar(arr[x]);
		x++;
	}
	return (0);
}
