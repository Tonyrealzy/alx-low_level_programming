#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: char to check
 *
 * Return: 0 is success
 */

int _strlen(char *s)
{
	int a = 0;
	
	while (*s != '\0')
	{
		a++;
		s++;
	}

	return (a);

}

