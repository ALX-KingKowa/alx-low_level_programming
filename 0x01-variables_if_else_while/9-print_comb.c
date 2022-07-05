#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 followed by commas and spaces.
 *
 * Return: returns 0 if everything is ok
 */
int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
if (i != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
