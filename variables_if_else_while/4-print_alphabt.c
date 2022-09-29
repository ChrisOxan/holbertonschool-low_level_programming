#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int may;

	for (may = 'a'; may <= 'z'; may++)
	{
		if (may != 'e' && may != 'q')
			putchar(may);
	}
		putchar('\n');
		return (0);
}

