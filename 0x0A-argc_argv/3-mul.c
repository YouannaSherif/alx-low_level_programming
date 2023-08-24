#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entery point
 * @argc: counter
 * @argv: array of pointers
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	if (argc == 3)
	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	else
		printf("Error\n");
	return (0);
}
