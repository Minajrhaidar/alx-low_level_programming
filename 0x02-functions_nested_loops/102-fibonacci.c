#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
int i;
long int a = 1, b = 2, next;
printf("%ld, %ld", a, b);
for (i = 2; i < 50; i++)
{
next = a + b;
printf(", %ld", next);
a = b;
b = next;
}
printf("\n");
return (0);
}
