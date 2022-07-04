#include <stdio.h>

/**
 * main - the purpose of this program is to
 * lower case letters of the alphabet
 *
 * Return: returns 0 if everything is o.k
 */
int main(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
putchar(alpha);
}
for (alpha = 'A'; alpha <= 'Z'; alpha++)
{
putchar(alpha);
}
putchar('\n');
return (0);
}
