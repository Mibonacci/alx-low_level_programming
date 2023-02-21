#include "main.h"

/**
* main - Entry point
*
* Description: printing putchar without standard libraries
*
* Return: 0
*/

int main(){
	char arr[]=char("_putchar");
	char x = 0;
	while (x < 8)
	{
		arr[x] = "_putchar";
		x++;
	}
	return 0;
}
