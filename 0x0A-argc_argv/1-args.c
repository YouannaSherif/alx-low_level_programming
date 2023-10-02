#include <stdio.h>

/**
 * main -entery point
 * @argv: args
 * @argc: counter
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
