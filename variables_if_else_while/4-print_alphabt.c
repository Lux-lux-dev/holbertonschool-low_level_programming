#include <stdio.h>

/**
 * main - Affiche l'alphabet sauf 'q' et 'e', suivi d'un saut de ligne
 *
 * Return: Toujours 0 (succès)
 */
int main(void)
{
	char lettre;

	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
		if (lettre != 'q' && lettre != 'e')
			putchar(lettre);
	}
	putchar('\n');

	return (0);
}
