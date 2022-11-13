#include "main.h"

/**
 * helperFunction - checks if square root
 * of a number exists
 * @num: number to check
 * @p: the square root which exists
 * Return: square root of num or -1
 */

int helperFunction(int num, int p)
{
	if (p * p == num)
	{
		return (p);
	}
	else
	{
		if (p * p > num)
			return (-1);
		else 
			return (helperFunction(num, p + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural
 * square root of a number
 * @n: number to get square root
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperFunction(n, 0));
}
