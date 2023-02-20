#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Print in lowercase, then uppercase followed by a new line 
 * Return: 0
 */
int main(void)
{
char lower;
for (lower = "a"; lower <= "z"; lower++)
putchar(lower);
for (lower = "A"; lower <= "Z"; lower++)
putchar(lower);
putchar("\n");
return (0);
}
