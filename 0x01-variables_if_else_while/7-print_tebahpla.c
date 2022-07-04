#include <stdio.h>

/**
 * main - the purpose of this program is to
 * print lowercase letters in reverse order
 *
 * Return: returns 0 if everything is o.k
 */
int main(void)
{
int i;
for (i = 122; i > 96 ; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
