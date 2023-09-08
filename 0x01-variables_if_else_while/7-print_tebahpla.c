#include <stdio.h>

/**
 * main - print alphabets from 'z' to 'a'
 *
 * Description: reverse alphabet from 'z' to 'a'
 * Return: Always(0) Success
 */

int main(void)
{
char i = 'z';

while (i >= 'a')
{
putchar(i);
i--;
}
putchar('\n');

return (0);
}
