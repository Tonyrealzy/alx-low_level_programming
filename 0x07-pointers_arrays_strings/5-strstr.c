#include "main.h"

/**
 * _strstr -  locates a substring
 * @haystack: string
 * @needle: substring
 * Return: a pointer to the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n && *haystack && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
		{
			return (h);
		}
		haystack = h + 1;
	}
	return (0);
}
