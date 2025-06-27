#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings using at most n bytes from src
 * @dest: The destination string
 * @src: The source string
 * @n: Maximum number of bytes to copy from src
 *
 * Return: A pointer to the resulting string (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	/* Find end of dest */
	while (dest[i] != '\0')
		i++;

	/* Append at most n bytes from src */
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Null-terminate the result */
	dest[i] = '\0';

	return (dest);
}
