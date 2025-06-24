#include "main.h"

/**
 * print_triangle - Affiche un triangle aligné à droite avec le caractère '#'
 * @size: Taille du triangle (hauteur et largeur de la base)
 */
void print_triangle(int size)
{
	int ligne, espace, diese;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (ligne = 1; ligne <= size; ligne++)
	{
		/* Affiche les espaces à gauche */
		for (espace = 0; espace < size - ligne; espace++)
			_putchar(' ');

		/* Affiche les '#' */
		for (diese = 0; diese < ligne; diese++)
			_putchar('#');

		_putchar('\n');
	}
}
