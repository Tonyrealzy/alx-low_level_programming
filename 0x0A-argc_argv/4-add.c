#include <stdio.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i, j, sum;
	
	sum = 0;

	if (argc < 2)
	{
		print("0\n");
		return (0);
	}
	
	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
