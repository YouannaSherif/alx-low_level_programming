#include <stdio.h>

/**
 * main -Entery point
 * @argv: arguements
 * @argc: number of arguements
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
