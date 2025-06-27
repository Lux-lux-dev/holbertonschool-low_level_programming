#include "main.h"
#include <stdlib.h>
#include <unistd.h>

#define SUCCESS 0

/**
 * puts2 - Print 1 char out of 2 of a string
 * @str: The string
 */
void puts2(char *str)
{
	int i = 0;

	if (!str)
		return;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
