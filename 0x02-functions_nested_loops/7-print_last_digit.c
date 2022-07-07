#include "main.h"

/**
 * print_last_digit - takes an input
 * integer and returns the last digit
 *
 * Return: returns the last digit
 *
 * @n: integer parameter
 *
 */
int print_last_digit(int n)
{
int last_d;
last_d = n % 10;
if (last_d < 0)
{
_putchar(-last_d + 48);
return (-last_d);
}
else
{
_putchar(l + 48);
return (last_d);
}
}
