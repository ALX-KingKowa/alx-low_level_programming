#include "main.h"

/**
 * _strchr - a function that fills memory with a constant byte
 * @s: pointer to memory area
 * @c: constant 
 * Return: returns a pointer to memory address area s
 */

char *_strchr(char *s, char c)
{
unsigned int i;
for (i = 0; *(s + i) = '\0'; i++)
{
if (*(s + i) == c)
{
return (s + i);
}
else
}
return ('\0');
}
