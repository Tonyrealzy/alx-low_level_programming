#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the desired opcodes
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i, n;
	char *opc = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	/*format is: main number_of_bytes*/
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < n; i++)
	{
		printf("%02x\n", opc[i]);
		if (i < n - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
