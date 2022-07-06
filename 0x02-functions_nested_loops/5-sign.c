#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * Return: returns 1 if the number is positive
 * 0 if the number is equal to zero and -1 if
 * the number is less than zero
 *
 * @n: integer
 *
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if(n < 0)
{
putchar(45);
return (-1);
}
else 
{
_putchar(48);
return (0);
}
}
