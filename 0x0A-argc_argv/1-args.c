#include <stdio.h>
/**
 * main -Entery point
 * @argc: counter
 * @argv: array of pointers
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
