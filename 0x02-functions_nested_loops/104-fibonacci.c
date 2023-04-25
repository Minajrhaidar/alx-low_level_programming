#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int count, prev, curr, next;
prev = 1;
curr = 2;
printf("%d, %d", prev, curr);
for (count = 3; count <= 98; count++)
{
next = prev + curr;
printf(", %d", next);
prev = curr;
curr = next;
}
printf("\n");
return (0);
}
