#include "main.h"
/**
 * swap_int -  Don't swap horses in crossing a stream
 *
 * @a: variable1
 * @b: variable2
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int cvvar = *a;
	*a = *b;
	*b = cvvar;

}
