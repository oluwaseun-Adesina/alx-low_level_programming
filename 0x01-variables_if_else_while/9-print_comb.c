#include <stdio.h>

/**
 * main - This is the entry point of the project
 *
 * Return: always 0
 */

int main(void)
{
int a;

for (a = '0'; a <= '9'; a++)
{
putchar(a);
if (a != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
