#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Check description
@@ -8,9 +8,9 @@

void print_alphabet(void)
{
char l;
char i;

for (l = 'a'; l <= 'z'; l++)
_putchar(l);
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
}
