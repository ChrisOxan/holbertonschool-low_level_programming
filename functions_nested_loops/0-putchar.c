#include "main.h"

/**
 * main - Retry point
 *
 * Return: 0
 */

int main(void)
{
	char letras[8] = "_putchar";

	int num;

	for (num = 0; num < 8; num++)
	{
		_putchar(letras[num]);
	}
		_putchar('\n');
		return (0);
}
