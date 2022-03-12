#include <stdio.h>

/**
 * main - This is the entry point of the project
 *
 * Return: always 0
 */

int main(void)
{
char a;

for (a = 'z'; a >= 'a'; a--)
{
putchar(a);
}
putchar('\n');
return (0);
}
