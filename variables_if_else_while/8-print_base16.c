#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hex;

	/* Print digits 0 to 9 */
	for (hex = '0'; hex <= '9'; hex++)
		putchar(hex);

	/* Print letters a to f */
	for (hex = 'a'; hex <= 'f'; hex++)
		putchar(hex);

	/* Print newline */
	putchar('\n');

	return (0);
}
