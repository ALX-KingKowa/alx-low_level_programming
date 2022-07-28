#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: result of multiplication or 1
 */

int main(int argc, char *argv[])
{

if (argc <= 2)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
