#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - This is the entry point of the project
 *
 * Return: always 0
 */
int main(void)
{
int n;
int last;

srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
/* your code goes there */
{
if (last > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, last);
}
else if (last == 0)
{
printf("Last digit of %d is %d and is 0\n", n, last);
}
else if (last < 6 && last != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
}
}
return (0);
}
