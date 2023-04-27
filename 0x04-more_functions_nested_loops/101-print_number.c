#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to print
 */
void print_number(int n)
{
int digit, reversed = 0;
if (n < 0)
{
_putchar('-');
n *= -1;
}
do {
digit = n % 10;
reversed = (reversed * 10) + digit;
n /= 10;
} while (n > 0);
while (reversed > 0)
{
digit = reversed % 10;
_putchar(digit + '0');
reversed /= 10;
}
if (n == 0)
_putchar('0');
}
