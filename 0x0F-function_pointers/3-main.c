#include "3-calc.h"

/**
 * main - checks argument
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	char s;
	int a, b, res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/*checking for an extra operator*/
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	
	/*Usage: calc num1 operator num2*/
	s = argv[2][0];
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (s != '+' && s != '-' && s != '*' && s != '/' && s != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if (s == '/' && b == 0)
	{
		printf("Error\n");
		exit(99);
	}
	res = (get_op_func(argv[2]))(a, b);
	printf("%d\n", res);
	return (0);
}
