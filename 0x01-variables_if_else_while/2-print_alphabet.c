#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * This function prints the lowercase alphabet from 'a' to 'z' followed by
 * a new line and returns 0 to indicate successful execution.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char c = 'a';

for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');

return (0);
}
