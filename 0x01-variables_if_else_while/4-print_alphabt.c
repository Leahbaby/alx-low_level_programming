#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * This function prints all letters except 'q' and 'e'
 * and returns 0 to indicate successful execution.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char c = 'a';

for (c = 'a'; c <= 'z'; c++)
{

if (c != 'q' && c != 'e')
putchar(c);

}
putchar('\n');

return (0);
}
