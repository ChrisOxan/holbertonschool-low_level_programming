#include "main.h"

/**
 * main - Neither irony nor sarcasm is argument
 *
 * @argc: Your program should print the result of the multiplication
 * @argv: You can assume that the two numbers and result of the multiplication
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int resmul;
	int nummul;
	int i;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	resmul = atoi(argv[1]);
	nummul = atoi(argv[2]);
	i = resmul * nummul;

	printf("%d\n", i);
	return (0);

}

