#include "main.h"
#include <stdlib.h>

/**
 * _callco - function that allocates memory for an array, using malloc
 *
 *@nmemb: number of elements
 *@size: byte of each element
 *Return: returns a pointer to the alloacted memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *memptr;
if (nmemb == 0 || size == 0)
{
return NULL;
}
memptr = malloc(nmemb * size)
if (memptr == NULL)
{
return NULL;
}
for(i = 0; i < nmemb * size; i++)
{
memptr[i] = 0;
}
return memptr;
}
