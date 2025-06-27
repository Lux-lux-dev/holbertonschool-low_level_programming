#include "main.h"

/**
 * leet - Encode une chaîne en 1337
 * @str: la chaîne à encoder
 *
 * Return: un pointeur vers la chaîne encodée
 */
char *leet(char *str)
{
	char from[] = "aAeEoOtTlL";
	char to[] = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; from[j] != '\0'; j++)
		{
			if (str[i] == from[j])
			{
				str[i] = to[j];
				break;
			}
		}
	}

	return (str);
}
