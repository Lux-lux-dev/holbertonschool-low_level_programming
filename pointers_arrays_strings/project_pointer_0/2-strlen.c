#include "main.h"

/**
 * _strlen - Retourne la longueur d'une chaîne de caractères
 * @s: pointeur vers la chaîne
 *
 * Return: longueur de la chaîne (entier)
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
