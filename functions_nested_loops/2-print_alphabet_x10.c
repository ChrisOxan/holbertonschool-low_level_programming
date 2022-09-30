#include "main.h"

/**
 *print_alphabet_x10 - Entry point
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char abc;
	int x10;

	for (x10 = 48; x10 <= 57; x10++)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
		{
			_putchar(abc);
		}
		_putchar('\n');
	}
	
}
