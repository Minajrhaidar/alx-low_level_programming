#include <stdio.h>
#include <ctype.h>
/**
 * print_buffer - prints the content of a buffer
 * @b: pointer to buffer
 * @size: size of the buffer
 *
 * Description: Prints the content of the buffer in hexadecimal and ASCII
 * representation, 10 bytes per line.
 */
void print_buffer(char *b, int size)
{
int i, j;
if (size <= 0)
{
printf("\n");
return;
}
for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);
for (j = i; j < i + 10; j++)
{
if (j < size)
{
printf("%02x", *(b + j));
}
else
{
printf("  ");
}
if (j % 2 != 0)
{
printf(" ");
}
}
for (j = i; j < i + 10; j++)
{
if (j >= size)
{
printf(" ");
}
else if (isprint(*(b + j)))
{
printf("%c", *(b + j));
}
else
{
printf(".");
}
}
printf("\n");
}
}
