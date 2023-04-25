#include <stdio.h>
/**
 * main - prints the sum of even fibonacci numbers
 * less than 4000000.
 * Return: Nothing!
 */
int main(void)
{
int fib1 = 1, fib2 = 2, sum = 0;
while (fib2 <= 4000000)
{
if (fib2 % 2 == 0)
sum += fib2;
int temp = fib1 + fib2;
fib1 = fib2;
fib2 = temp;
}
printf("%d\n", sum);
return (0);
}
