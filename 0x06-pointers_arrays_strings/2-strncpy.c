#include "main.h"

/**
 * _strcmp - this function compare two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return:
 * returns zero if s1 == s2
 * returns negative number if s1 < s2
 * returns positive number if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
int i = 0, diff = 0;

while (diff == 0)
{
if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
break;
diff = *(s1 + i) - *(s2 + i);
i++;
}

return (diff);
}
