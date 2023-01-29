#include "search_algos.h"
/**
 * linear_search - function that searches for a particular value in an array
 *
 * @array: input array
 * @size: size of the array
 * @value: the value to search for
 * Return: success
 *
 */
int linear_search(int *array, size_t size, int value)
{
int i;
if (array == NULL)
	return (-1);
for (i = 0; i < (int)size; i++)
{
	printf("Value checked array[%d] = [%d]\n");
	if (value == array[i])
		return (i)
}
return (-1)
}
