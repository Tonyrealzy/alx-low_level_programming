#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The length of int
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, j;

	for (a = 0; dest[a] != '\0'; a++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[a + j] = src[j];
	}
	dest[a + j] = '\0';
	return (dest);
}
