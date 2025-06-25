#include "main.h"

/**
 * print_rev - Affiche une chaîne inversée suivie d'un saut de ligne
 * @s: Chaîne de caractères à inverser
 *
 * Return: Rien
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
		len++;

	for (i = len - 1; i >= 0; i--)
		write(1, &s[i], 1);

	write(1, "\n", 1);
}
