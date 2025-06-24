#include "main.h"

/**
 * print_triangle - Prints a right-aligned triangle using '#'
 * @size: The size of the triangle
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
		for (espace = 0; espace < size - ligne; espace++)
			_putchar(' ');

		for (diese = 0; diese < ligne; diese++)
			_putchar('#');

		_putchar('\n');
	}
}
