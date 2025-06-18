#include "main.h"

/**
 * main - Prints the lowercase alphabet using _putchar
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char lettre;

	for (lettre = 'a'; lettre <= 'z'; lettre++)
		_putchar(lettre);

	_putchar('\n');

}
