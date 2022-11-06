#include "main.h"

/**
 * reverse_array- reverses arrays
 * @n: integer
 * @a: array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; i <= n - 1; i++)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
	}
}
