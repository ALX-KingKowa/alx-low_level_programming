#include "main.h"

/**
 * print_line - this function draws a straight line in the terminal
 *
 * @n: integer parameter
 *
 * Return: void
 *
 */

void print_line(int n)
{
int i;

for (i = 0; i < n; i++)
{
_putchar(95);
}
_putchar('\n');
}
