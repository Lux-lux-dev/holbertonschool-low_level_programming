#include <stdio.h>

/**
 * main - Affiche toutes les combinaisons possibles de nombres à un chiffre
 *
 * Return: Toujours 0 (succès)
 */
int main(void)
{
	int chiffre;

	for (chiffre = 0; chiffre <= 9; chiffre++)
	{
		putchar(chiffre + '0'); /* Affichage du chiffre */
		if (chiffre != 9)       /* Ajout de ",, " sauf après le dernier chiffre */
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n'); /* Print newline */

	return (0);
}
