#include "main.h"

/**
 * main - Entry point
 * Description: prints the number of arguments.
 * @argc: the number of arguments.
 * @argv: the array of arguments.
 * Return: always 0.
 */

int main(int argc, char const *argv[])
{
	int x;

	x = -1;
	while (x++ < argc - 1)
		printf("%s\n", argv[x]);
	return (0);
}
