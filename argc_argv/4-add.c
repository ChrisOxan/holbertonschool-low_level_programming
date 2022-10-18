#include "main.h"

/**
 * main - To infinity and beyond
 *
 * @argc: If no number is passed to the program,
 * @argv: If one of the number contains symbols that are not digits
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;
	int b = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != 0; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		b += atoi(argv[i]);
	}

	printf("%d\n", b);

	return (0);
}
