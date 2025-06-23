#include "main.h"

/**
 * more_numbers - Affiche les nombres de 0 à 14, dix fois.
 * Utilise seulement trois appels à _putchar.
 */
void more_numbers(void)
{
	char *s =
		"01234567891011121314\n"
		"01234567891011121314\n"
		"01234567891011121314\n"
		"01234567891011121314\n"
		"01234567891011121314\n"
		"01234567891011121314\n"
		"01234567891011121314\n"
		"01234567891011121314\n"
		"01234567891011121314\n"
		"01234567891011121314\n";

	while (*s)
		_putchar(*s++);
}
