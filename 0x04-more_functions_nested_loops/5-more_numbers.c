#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14
 * 10 consecutive times
 *
 * Return: void
 *
 */

void more_numbers(void)
{
int i, num;

for (i = 0; i < 10; i++)
{
for (num = 0; ch < 15; ch++)
{
if (num >= 10)
_putchar((num / 10) + 48);
_putchar((num % 10) + 48);
}
_putchar('\n');
}
}
