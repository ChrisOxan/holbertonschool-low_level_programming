#include "main.h"

/**
 * main - Silence is argument carried out by other means
 *
 * @argc: Write a program that prints the number of arguments passed into it.
 * @argv: Your program should print a number, followed by a new line
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argv[0])

	printf("%d\n", argc - 1);
	return (0);
}
