#include <stdio.h>

/**
 * main - Affiche l'alphabet en minuscules et majuscules
 *
 * Return: Toujours 0 (succès)
 */
int main(void)
{
	char lettre;

	/* Affichage des lettres minuscules */
	for (lettre = 'a'; lettre <= 'z'; lettre++)
		putchar(lettre);

	/* Affichage des lettres majuscules */
	for (lettre = 'A'; lettre <= 'Z'; lettre++)
		putchar(lettre);

	/* Ajout du saut de ligne */
	putchar('\n');

	return (0);
}
