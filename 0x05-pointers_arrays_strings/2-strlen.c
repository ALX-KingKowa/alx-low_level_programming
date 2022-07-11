#include "main.h"

/**
 * strlen - function to calculate the length of a string
 *
 * @s: input string array parameter
 *
 * Return: returns the length of the string
 *
 */

int _strlen(char *s)
{
int strCount = 0;
while (*(s + strCount) != '\0')
strCount++;
return (strCount);
}
