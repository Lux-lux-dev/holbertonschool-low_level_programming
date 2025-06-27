#include "main.h"

/**
 * cap_string - Met une majuscule à chaque mot d'une chaîne
 * @str: la chaîne de caractères à modifier
 *
 * Return: un pointeur vers la chaîne modifiée
 */
char *cap_string(char *str)
{
	int i = 0, j;
	char sep[] = " \t\n,;.!?\"(){}";

	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;

	while (str[i])
	{
		for (j = 0; sep[j]; j++)
		{
			if (str[i] == sep[j] && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			{
				str[i + 1] -= 32;
				break;
			}
		}
		i++;
	}

	return (str);
}
