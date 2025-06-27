#include "main.h"

/**
 * string_toupper - Convertit toutes les lettres minuscules d'une chaîne
 *                  en lettres majuscules
 * @str: la chaîne de caractères à modifier
 *
 * Return: un pointeur vers la chaîne modifiée
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}

	return (str);
}
