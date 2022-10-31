#include "variadic_functions.h"

/**
 * print_numbers - To be is to be the value of a variable
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 * Return: Print a new line at the end of your function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int a = 0;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		a = va_arg(arg, int);
		if (i < (n - 1) && separator != 0)
			printf("%d%s", a, separator);
		else
			printf("%d", a);
	}
	va_end(arg);
	printf("\n");
}
