#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: destination memory area
 * @src source memory area
 * @n: bytes to be copied
 * Return: returns a pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
