#include "main.h"

/**
 * _isalpha - checks for lowercase letters
 *
 * Return: returns 1 if the character is
 * lowercase and 0 otherwise
 *
 * @c: ASCII character
 *
 */

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
