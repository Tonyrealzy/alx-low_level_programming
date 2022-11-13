#include "main.h"

/**
 * helperFunction - returns 0 or 1
 * @num: number being checked
 * @i: possible factor num
 * Return: 1, if prime or 0, if not
 */

int helperFunction(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
			return (0);
		else
			return (helperFunction(num, i + 1));
	}
	else
		return (1);
}


/**
 * is_prime_number - checks if input is prime
 * @n: number to check
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	else
		return (helperFunction(n, 2));
}
