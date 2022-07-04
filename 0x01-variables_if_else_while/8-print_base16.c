#include <stdio.h>

/**
 * main - the purpose of this program is to
 * print numbers from zero to nine(9)
 *and a to f
 *
 * Return: returns 0 if everything is o.k
 */
int main(void)
{
int i;
for (i = 48; i < 58 ; i++)
{
putchar(i);
}
for (i = 97; i < 103; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
