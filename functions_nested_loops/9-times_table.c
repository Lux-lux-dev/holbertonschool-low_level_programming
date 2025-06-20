#include "main.h"

/**
 * times_table - Affiche la table de 9 de 0 à 9 avec _putchar uniquement
 */
void times_table(void)
{
	int i, result;

	for (i = 0; i <= 10; i++)
	{
		result = i * 9;

		if (result >= 10)
		{
			_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
		else
		{
			_putchar(result + '0');
		}
		_putchar('\n');
	}
}
