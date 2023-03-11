#include "main.h"

/**
 * main - Entry point
 * Description: prints the file name
 * @argc: the number of arguments.
 * @argv: the array of arguments.
 * Return: always 0.
 */

int main(int argc, char const *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
