#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Variable n will store a diffrent value everytime the program is run
 * Return: 0
 */
int main(void)
{
int n, lastnum;
srand(time(0));
n rand()-RAND_MAX / 2
lastnum = n % 10;
if (lastnum > 5)
{
printf("last digit of %d is %d and grearter than 5\n", n, lastnum);
}
else if (lastnum == 0)
{
printf("last digit of %d is %d and 0\n", n, lastnum);
}
else if (lastnum < 6 && lastnum != 0)
{
printf(" last digit of %d is %d is less than 6 and not 0\n", n, lastnum);
}
