#include "main.h"

/**
 * more_numbers - Affiche les nombres de 0 à 14, dix fois.
 * Utilise seulement trois appels à _putchar.
 */
void more_numbers(void)
{
	int ligne, n;

	for (ligne = 0; ligne < 10; ligne++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar('0' + n / 10);
			_putchar('0' + n % 10);
		}
		_putchar('\n');
	}
}
