#include "main.h"

/**
 *print_sign - sign of a number.
 *@n: num
 * Return: 1 or 0
 */

int print_sign(int n)
{
int result;
if (n > 0)
{
_putchar('+');
result = 1;
}
if (n == 0)
{
_putchar('0');
result = 0;
}
if (n < 0)
{
_putchar('-');
result = -1;
}
return (result);
}
