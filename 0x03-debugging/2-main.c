#include <stdio.h>
#include "main.h"
/**
* main - prints the largest of 3 integers
* Return: 0
*/
int main(void)
{
int a, b, c;
int larget;
a = 972;
b = -98;
c = 0;
larget = larget_number(a, b, c);
printf("%d is the larget number\n", larget);
return (0);
}
