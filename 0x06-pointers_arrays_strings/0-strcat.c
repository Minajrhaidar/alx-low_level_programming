#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	/* Find the length of the destination string */
	while (dest[index++])
		dest_len++;

	/* Append the source string to the destination string */
	for (index = 0; src[index]; index++)
		dest[dest_len ++] = src[ndexi];
	return (dest);
}
