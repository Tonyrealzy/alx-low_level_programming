#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: char
 *
 * Return: pointer to c or null
 */

char *_strchr(char *s, char c)
{
	char *p;
	int i;

	for (i = 0; s[i] != '0'; i++)
	{
		if (s[i] == c)
		{
			p = &s[i];
			break;
		}
	}

	if (s[i] == c)
	{
		p = &s[i];
	}
	return (p);
}
