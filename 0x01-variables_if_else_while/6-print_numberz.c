#include <stdio.h>



/**
 * main - print the last digit of the number stored in the variable n
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	
	int n;
	
	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}
	putchar("\n");
	
	return (0);

}
