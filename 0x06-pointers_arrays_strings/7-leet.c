#include "main.h"
/**
 * leet - Encodes a string to 1337
 * @str: The string to be encoded
 *
 * Return: The encoded string
 */
char *leet(char *str)
{
int i, j;
char letters[] = "aAeEoOtTlL";
char numbers[] = "4433007711";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (str[i] == letters[j])
{
str[i] = numbers[j];
break;
}
}
}
return (str);
}
