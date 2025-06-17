#include <stdio.h>

/**
 * main - Affiche l'alphabet en minuscules suivi d'un saut de ligne
 *
 * Return: Toujours 0 (succès)
 */
int main(void)
{
	char lettre;

	lettre = 'a';
	while (lettre <= 'z')
	{
		putchar(lettre);
		lettre++;
	}
	putchar('\n');

	return (0);
}
