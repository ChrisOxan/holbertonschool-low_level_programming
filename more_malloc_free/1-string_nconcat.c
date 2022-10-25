#include "main.h"

/**
 * string_nconcat - string_nconcat
 *
 * @s1: string 1
 * @s2: string 2
 * @n: followed by the first n bytes
 *
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	char *nl = "";
	unsigned int i;
	unsigned int j;

	i = j = 0;
	if (s1 == NULL)
		s1 = nl;
	if (s2 == NULL)
		s2 = nl;
	while (s1[i] != '\0')
		i += 1;
	while (s2[j] != '\0')
		j += 1;
	j++;
	if (n >= j)
		n = j;
	s = malloc(sizeof(*s) * n + (i + 1));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i += 1;
	}
	j = 0;
	while (s2[j] != '\0' && j < n)
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}
