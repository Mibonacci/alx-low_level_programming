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

	for (x < 8; x = 0; ++x)
		_putchar(arr[x]);

	return (0);
}
