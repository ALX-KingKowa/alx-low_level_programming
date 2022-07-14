#include "main.h"

/**
 * _strncpy- this function copies a string
 * @dest: pointer to the first string
 * @src: pointer to the second string
 * @n: number of bytes
 * Return: returns a character
 */

char *_strncpy(char *dest, char *src, int n)
{
int a = 0, b = 0;

while (src[b])
{
b++;
}

while (a < n && src[a])
{
dest[a] = src[a];
a++;
}

while (a < n)
{
dest[a] = '\0';
a++;
}

return (dest);
}
