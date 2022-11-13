#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: pointer to string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

/**
 * helperFunction - checks if palindrome
 * @s: pointer to string
 * @i1: first index
 * @i2: second index
 * Return: 0 or 1
 */

int helperFunction(char *s, int i1, int i2)
{
	if (i1 < i2 && s[i1] == s[i2])
	{
		return (helperFunction(s, i1 + 1, i2 - 1));
	}
	if (s[i1] != s[i2])
	{
		return (0);
	}
	return (1);
}

/**
 * is_palindrome - returns 1 if a
 * string is a palindrome and 0 if not
 * @s: string
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int i1, i2;

	i1 = 0;
	i2 = _strlen_recursion(s) - 1;

	if (!*s)
		return (1);

	return (helperFunction(s, i1, i2));
}
