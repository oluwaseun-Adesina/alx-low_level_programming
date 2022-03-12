#include <stdio.h>

/**
 * main - This is the entry point of the project
 *
 * Return: always 0
 */

int main(void)
{
char a;
char b;

for (a = '0'; a <= '9'; a++)
{
putchar(a);
}
for (b = 'a'; b <= 'f'; b++)
{
putchar(b);
}
putchar('\n');
return (0);
}
