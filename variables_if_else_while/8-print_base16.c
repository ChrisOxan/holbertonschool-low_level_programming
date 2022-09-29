#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int nb16;

	char lb16;

	for (nb16 = 48; nb16 <= 57; nb16++)
	{
		putchar(nb16);
	}
	for (lb16 = 'a'; lb16 <= 'f'; lb16++)
	{
		putchar(lb16);
	}
		putchar('\n');
		return (0);
}
