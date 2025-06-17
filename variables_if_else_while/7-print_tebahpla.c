#include <stdio.h>

/**
 * main - Affiche les lettres de 'z' à 'y' suivi d'un saut de ligne
 *
 * Return: Toujours 0 (succès)
 */
int main(void)
{
	char erttel;

	for (erttel = 'z'; erttel >= 'a'; erttel--)
		putchar(erttel);

	putchar('\n');

	return (0);
}
