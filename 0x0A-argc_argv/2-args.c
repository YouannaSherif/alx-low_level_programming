#include <stdio.h>
/**
 * main -Entery point
 * @argc: counter
 * @argv: array of pointers
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
