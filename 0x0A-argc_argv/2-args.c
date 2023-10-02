#include <stdio.h>

/**
 * main -entery point
 * @argc: counter
 * @argv: arguments
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
