#include "main.h"

/**
 * _pow_recursion - Once an idea has taken hold of the brain it's almost
 *
 * @x: Write a function that returns the value of x
 * @y: raised to the power of y
 *
 * Return: -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	return (_pow_recursion(x, y - 1) * x);
}
