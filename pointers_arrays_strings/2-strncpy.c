#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copies a string with at most n bytes
 * @dest: The destination buffer
 * @src: The source string
 * @n: The maximum number of bytes to copy
 *
 * Return: A pointer to the destination string (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	/* Copy characters from src to dest until n or null terminator */
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* Fill the remaining space with null bytes if src is shorter than n */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
