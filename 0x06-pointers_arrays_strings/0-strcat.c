#include "main.h"

/**
 * _strcat - this function concatenates two strings,
 * @dest: pointer to destination string
 * @src: pointer to source string
 * Return: returns the pointer to destination string
 */

char *_strcat(char *dest, char *src)
{
int count1 = 0, count2 = 0;

while (*(dest + count1) != '\0')
{
count1++;
}

while (count2 >= 0)
{
*(dest + count1) = *(src + count2);
if (*(src + count2) == '\0')
break;
count1++;
count2++;
}
return (dest);
}
