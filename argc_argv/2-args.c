#include "main.h"

/**
 * main - The best argument against democracy is a five-minute conversation.
 *
 * @argc: All arguments should be printed, including the first one
 * @argv: Only print one argument per line, ending with a new line
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
