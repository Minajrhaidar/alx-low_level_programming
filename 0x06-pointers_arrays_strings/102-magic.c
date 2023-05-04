#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int n;
int a[5];
a[0] = 98;
a[1] = 198;
a[2] = 298;
a[3] = 398;
a[4] = 498;
*(a + 2) = 98;
printf("a[2] = %d\n", a[2]);
return (0);
}
