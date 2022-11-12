#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: pointer to array
 * @size: size of array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, size1;
	unsigned int Diag1, Diag2;

	size1 = 0;
	Diag1 = 0;
	Diag2 = 0;

	size1 = (size * size) - 1;

	for (i = 0; i <= size1; i = i + (size + 1))
	{
		Diag1 = Diag1 + a[i];
	}

	for (i = (size - 1); i < size1; i = i + (size - 1))
	{
		 Diag2 = Diag2 + a[i];
	}
	printf("%i, %i\n", Diag1, Diag2);
}
