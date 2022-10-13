#include "main.h"

/**
 * print_chessboard - Chess is mental torture
 *
 * @a: Write a function that prints the chessboard.
 *
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; a[i][7]; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
