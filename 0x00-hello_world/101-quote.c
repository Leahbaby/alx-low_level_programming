#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
const char *message1 = "and that piece of art is useful\"";
const char *message2 = " - Dora Korpar, 2015-10-19\n";

ssize_t len1 = strlen(message1);
ssize_t len2 = strlen(message2);

if (write(2, message1, len1) != len1 || write(2, message2, len2) != len2)
{
return (1);
}
return (1);
}
