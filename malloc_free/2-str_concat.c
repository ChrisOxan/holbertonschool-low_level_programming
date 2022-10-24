#include "main.h"

/**
 * *str_concat - He who is not courageous enough to take risks will accomplish
 * @s1: Werite a function
 * @s2: that concatenates two strings
 *
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int a;
	int string1;
	int string2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	string1 = strlen(s1) + strlen(s2);
	p = malloc(sizeof(char) * string1 + 1);
	if (p == NULL)
		return (NULL);
	for (a = 0; s1[a]; a++)
	{
		p[a] = s1[a];
		string2++;
	}
	for (a = 0; s2[a]; a++)
		p[string2++] = s2[a];
	return (p);
}
