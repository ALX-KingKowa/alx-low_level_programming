#include "main.h"

/**
 * _isdigit - checks for a digit between
 * 0 and 9
 *
 * @c: parameter to be checked
 *
 * Return: returns 1 if it is uppercase and
 * 0 if it is not
 *
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
