#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the desired opcodes
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int i, n;

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
		printf("%02x\n", *((char *)main + i));
		if (i < n - 1)
			printf(" ");
		else
			printf("\n");
	}
}
