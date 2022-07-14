#include "main.h"

/**
 * _strncat - this function concatenates two strings,
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes to be used from source
 * Return: returns the pointer to destination string
 */

char *_strncat(char *dest, char *src, int n)
{
int count1 = 0, count2 = 0;

while (*(dest + count1) != '\0')
{
count1++;
}

while (count2 < n)
{
*(dest + count1) = *(src + count2);
if (*(src + count2) == '\0')
break;
count1++;
count2++;
}
return (dest);
}
