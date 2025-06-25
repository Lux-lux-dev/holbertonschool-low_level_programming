#include "main.h"

/**
 * rev_string - Inverse une chaîne de caractères en place
 * @s: Pointeur vers la chaîne à inverser
 *
 * Return: Rien
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp;

	while (s[j] != '\0')
		j++;

	j--; /* Positionne j sur le dernier caractère réel */

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}

