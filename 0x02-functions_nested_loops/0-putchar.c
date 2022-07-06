#include "main.h"

/**
 * main - Print the word "_putchar"
 *
 * Return: returns 0 if everything is OK
 */

int main(void)
{
int i;
char charArr[] = "_putchar";
for (i = 0; i < 8; i++)
{
_putchar(charArr[i]);
}
_putchar('\n');
return (0);
}
