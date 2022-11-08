#include "main.h"

/**
 * rot13- encodes a string
 * @s: string
 * Return: address of s
 */

char *rot13(char *s)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklm";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[i] == *(s + i))
			{
				*(s + i) = b[j];
				break
			}
		}
	}
	return (s);
}
