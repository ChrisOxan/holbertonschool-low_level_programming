#include "main.h"
/**
 * print_triangle - Retry point
 *
 * @size: Write a function that prints a triangle, followed by a new line.
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int a;
	int b;


	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = size - 1; b >= 0; b--)
			{
				if (b > a)
				{
						_putchar(' ');
				}
				else if (b <= a)
				{
					_putchar('#');
				}
			}
			_putchar(10);
		}
	}
	else if (size <= 0)
	{
		_putchar(10);
	}
}

