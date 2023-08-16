#include "3-calc.h"

/**
 * main -Entery point
 *
 * @argc: the number of args
 * @argv: arg vector
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int (*opf)(int, int), a, b;

	if (argc != 4)
		printf("Error\n"), exit(98);

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	opf = get_op_func(argv[2]);

	if (!opf)
		printf("Error\n"), exit(99);

	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
	{printf("Error\n"), exit(100); }

			printf("%d\n", opf(a, b));
			return (0);
}
