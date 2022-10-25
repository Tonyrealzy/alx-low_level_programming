#include <unistd.h>

/**
 * _putchar - writes char c
 * @c: char to be checked
 *
 * Return: 1 on success
 */

int _putchar(char c)
{
	
	return (write(1, c, 3));

}

