#include "main.h"
#include <stdio.h>
/**
 * _strcat - Concatène deux chaînes de caractères
 * @dest: La chaîne de destination (doit avoir assez de place)
 * @src: La chaîne source à ajouter
 *
 * Return: Un pointeur vers la chaîne résultante (dest)
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	/* Trouver la fin de dest */
	while (dest[i] != '\0')
		i++;

	/* Copier chaque caractère de src à la suite de dest */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Ajouter le caractère nul à la fin */
	dest[i] = '\0';

	return (dest);
}
