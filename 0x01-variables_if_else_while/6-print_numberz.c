#include <stdio.h>

/**
 * main - print all numbers of base 10 from 0
 *
 * Description: The function prints all base 10 numbers from 0
 * Return: Always(0) Success
 */

int main(void)
{

int i = 0;

while (i < 10)
{
putchar(i + '0');
i++;
}
putchar('\n');

return (0);
}
