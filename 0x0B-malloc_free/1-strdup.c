#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function returns a pointer to a new string
 * which is a duplicate of the string str
 *
 * @str: string
 *
 * Return: returns a pointer to the duplicated string
 *
 */

char *_strdup(char *str)
{
char *chstr;
unsigned int i, j;

if (str == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
;
chstr = (char *)malloc(sizeof(char) * (i + 1));

if (chstr == NULL)
return (NULL);

for (j = 0; j <= i; j++)
chstr[j] = str[j];

return (chstr);
}
