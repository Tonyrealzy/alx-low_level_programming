#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: index
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int z1 = 0, z2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[z1] != '\0')
		z1++;
	while (s2[z2] != '\0')
		z2++;

	if (n >= z2)
		n = z2;
	p = malloc((z1 + n + 1) * sizeof(char));

	if (p == NULL)
		return (0);

	for (i = 0; i < z1; i++)
	{
		p[i] = s1[i];
	}

	for (; i < (z1 + n); i++)
	{
		p[i] = s2[i - z1];
	}
	p[i] = '\0';

	return (p);
}
