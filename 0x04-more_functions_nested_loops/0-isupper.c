#include "main.h"

/**
 * _isupper - checks if a particular character
 * is uppercase
 *
 * @c: parameter to be checked
 *
 * Return: returns 1 if it is uppercase and
 * 0 if it is not
 *
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
