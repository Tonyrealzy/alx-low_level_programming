#include "main.h"

/**
 *_strlen - finds and outputs length of string
 *@s: pointer to string
 *
 *Return: length of string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
