#include "main.h"

/**
 * _strcmp - this function compare two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: number of bytes
 * Return:
 * returns zero if s1 == s2
 * returns negative number if s1 < s2
 * returns positive number if s1 > s2
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0, diff = 0;

while (diff == 0)
{
if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
break;
while (i < n)
{
diff = *(s1 + i) - *(s2 + i);
i++;
}
}

return (diff);
}
