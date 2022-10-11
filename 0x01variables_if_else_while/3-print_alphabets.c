#include <stdio.h>

/**
  * main - Entry point
  * Return: 0
  */

int main(void)
{
	char min;

	for (min = 'a'; min <= 'z'; min++)
	{
		putchar(min);
	}
	for (min = 'A'; min <= 'Z'; min++)
		putchar(min);
	putchar('\n');
	return (0);
}
