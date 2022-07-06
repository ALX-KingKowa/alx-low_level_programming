#include "main.h"

/**
 * _islower - checks for lowercase letters
 * Return: returns 1 if the character is
 * lowercase and 0 otherwise
 * @c: ASCII character
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
