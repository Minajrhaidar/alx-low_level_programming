#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the lowercase alphabet in reverse
 * Return: 0 on success
 */
int main(void)
{
int i;
for (i = 122; i >= 97; i--)
putchar(i);
putchar('\n');
return (0);
}
