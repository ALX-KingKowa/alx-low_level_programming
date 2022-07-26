#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: the size of the array
 * @c: character to be stored in the array
 *
 * Return: returns a pointer to the array of
 * characters
 *
 */

char *create_array(unsigned int size, char c)
{
char *ch;
unsigned int i;

if (size == 0)
return (NULL);

ch = malloc(sizeof(c) * size);
if (ch == NULL)
return (NULL);

for (i = 0 ; i < size; i++)
{
ch[i] = c;
}

return (ch);

}
