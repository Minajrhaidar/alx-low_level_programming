#include <stdio.h>
/**
 * add - Adds two integers and returns the result
 * @a: First integer
 * @b: Second integer
 *
 * Return: Sum of a and b
 */
void print_to_98(int n)
{
int i;
if (n <= 98
{
for (i = n; i < 98; i++)
{
printf("%d, ", i);
}
}
else
{
for (i = n; i > 98; i--)
{
printf("%d, ", i);
}
}
printf("98\n");
}
