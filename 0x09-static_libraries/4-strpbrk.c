#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: string
 * Return: pointer to a byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	char *p;
	int i, j;

	p = 0;

	for (i = 0; s[i] != '0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	return (p);
}
