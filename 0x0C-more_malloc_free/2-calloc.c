#include "main.h"
#include <stdlib.h>

/**
 * _callco - function that allocates memory for an array, using malloc
 *
 * @nmemb: number of elements
 * @size: byte of each element
 * Return: returns a pointer to the alloacted memory
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *memory;

if (nmemb == 0 || size == 0)
return (NULL);
memory = malloc(nmemb * size);
if (memory == NULL)
return (NULL);
for (i = 0; i < nmemb * size; i++)
*(memory + i) = 0;
return ((void *)memory);
}
