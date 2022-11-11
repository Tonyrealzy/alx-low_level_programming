#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: contains bytes
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int n = 0, i, j;

	while (s[i] != '0')
	{
		if (s[i] != 32)
		{
			j = 0;
			while (accept[j] != '0')
			{
				if (s[i] == accept[j])
					n += 1;
			}
			j++;
		}
		else
			return (n);
		i++;
	}
	return (n);
}
