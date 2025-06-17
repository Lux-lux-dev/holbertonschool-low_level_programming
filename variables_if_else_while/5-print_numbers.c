#include <stdio.h>

/**
 * main - Affiche les chiffres de 0 à 9 suivi d'un saut de ligne
 *
 * Return: Toujours 0 (succès)
 */
int main(void)
{
	char chiffre;

	for (chiffre = '0'; chiffre <= '9'; chiffre++)
		putchar(chiffre);

	putchar('\n');

	return (0);
}
