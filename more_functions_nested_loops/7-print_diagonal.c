#include "main.h"
/**
 * print_diagonal - Dessine une diagonale descendante sur le terminal.
 * @n: Le nombre de lignes de la diagonale, et donc le nombre de `\` à afficher.
 *
 * Description: Pour chaque ligne, la fonction affiche un nombre croissant
 * d'espaces suivi du caractère '\'. Si n est inférieur ou égal à 0,
 * seule une nouvelle ligne est imprimée.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
