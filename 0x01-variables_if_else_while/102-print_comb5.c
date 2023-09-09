#include <stdio.h>

/**
 * main - Generate pairs of two-digit numbers without repeating digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;

for (i = 0; i <= 99; i++)
{
for (j = i + 1; j <= 99; j++)
{
if (i != j)
{
printf("%02d %02d", i, j);

if (i != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');

return (0);
}
