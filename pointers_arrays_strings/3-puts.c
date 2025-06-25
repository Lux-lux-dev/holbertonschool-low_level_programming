#include <unistd.h>

/**
 * _puts - Affiche une chaîne suivie d'un saut de ligne
 * @str: Chaîne à afficher
 */
void _puts(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}
