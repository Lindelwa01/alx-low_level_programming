#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Assign a random number to the variable n
 * Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("%d is positive\n", n);
}
else if (n = 0)
{
	printf("%d is zer\n", n);
}
else
{
	printf("%d is negative\n", n);
}
return (0);
}
