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
	int i, j, m;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	
	i = atoi(argv[i]);
	j = atoi(argv[j]);

	m = i * j;
	printf("%d\n", m);
	return (0);
}
