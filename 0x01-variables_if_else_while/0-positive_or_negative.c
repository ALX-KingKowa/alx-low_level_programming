#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the purpose of this program is to
 * assign a random number to the variable n
 * each time it is executed.
 *
 * Return: returns 0 if everything is o.k
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else if (n < 0)
printf("%d is negative\n", n);
return (0);
}
