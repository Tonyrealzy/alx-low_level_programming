#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i, m = 1;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	m *= atoi(argv[i]);
	printf("%d\n", m);
	return (0);
}
