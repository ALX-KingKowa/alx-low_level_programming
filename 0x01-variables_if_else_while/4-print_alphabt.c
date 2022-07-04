#include <stdio.h>

/**
 * main - the purpose of this program is to
 * lower case letters of the alphabet except
 * the letters q and e
 *
 * Return: returns 0 if everything is o.k
 */
int main(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
if (alpha != 'e' && alpha != 'q')
{
putchar(alpha);
}
}
putchar('\n');
return (0);
}
