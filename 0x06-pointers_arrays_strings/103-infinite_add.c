#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers
 * @n1: First number
 * @n2: Second number
 * @r: Buffer that the function will use to store the result
 * @size_r: Buffer size
 *
 * Return: Pointer to the result, or 0 if the result can not be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1, len2, carry, sum, i, j;
len1 = strlen(n1);
len2 = strlen(n2);
if (len1 > size_r || len2 > size_r)
return (0);
carry = 0;
for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--)
{
sum = carry;
if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';
if (sum >= 10)
{
carry = 1;
sum -= 10;
}
else
{
carry = 0;
}
if (len1 > size_r || len2 > size_r || i < -1 || j < -1)
return (0);
r[size_r - 1] = sum + '0';
size_r--;
}
if (carry != 0 && size_r >= 1)
{
r[size_r - 1] = carry + '0';
}
else if (carry != 0)
{
return (0);
}
return (&r[size_r]);
}
