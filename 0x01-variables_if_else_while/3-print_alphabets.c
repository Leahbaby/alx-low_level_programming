#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * This function prints the lowercase alphabet from 'a' to 'z'
 * and then uppercase alphabet from 'A' to 'Z' followed by
 * a new line and returns 0 to indicate successful execution.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char l = 'a';
char u = 'A';

while (l <= 'z')
{
putchar(l);
l++;
}

while (u <= 'Z')
{
putchar(u);
u++;
}
putchar('\n');

return (0);
}
