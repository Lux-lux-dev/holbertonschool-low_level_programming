#include "main.h"
#include <unistd.h>

/**
 * puts_half - Prints the second half of a string
 * @str: The input string
 */
void puts_half(char *str)
{
	int len = 0, i, start;

	/* Calculate string length */
	while (str[len] != '\0')
		len++;

	/* Determine starting index for printing */
	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len + 1) / 2;

	/* Print from start to end */
	for (i = start; i < len; i++)
		write(1, &str[i], 1);

	write(1, "\n", 1);
}
