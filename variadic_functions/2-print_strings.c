#include "variadic_functions.h"

/**
 * print_strings - One woman's constant is another woman's variable
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *a;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		a = va_arg(arg, char*);
		if (a == NULL)
			printf("(nil)");
		else
		{
			if (i < (n - 1) && separator != 0)
				printf("%s%s", a, separator);
			else
				printf("%s", a);
		}
	}
	va_end(arg);
	printf("\n");
}
