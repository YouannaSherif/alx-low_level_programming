#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main -entery point
 * @argc: counter
 * @argv: arguments
 * Return: 0 on success, 1 on error
 */

int main(int argc, char **argv)
{
	int i, res = 0;

			for (i = 1; i < argc; i++)
			{
				if (!isdigit(atoi(argv[i])))
				{
						res += atoi(argv[i]);
				}
				else
				{
				printf("Error\n");
				return (1);
				}
			}
			printf("%d\n",res);
		return (0);
}
