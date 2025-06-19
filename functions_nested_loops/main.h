#ifndef MAIN_H
#define MAIN_H

/**
 * print_alphabet - Affiche l'alphabet en minuscule.
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - Affiche l'alphabet 10 fois.
 */
void print_alphabet_x10(void);

/**
 * _islower - Vérifie si un caractère est une lettre minuscule.
 * @c: Le caractère à vérifier.
 *
 * Return: 1 si c est une minuscule, 0 sinon.
 */
int _islower(int c);

/**
 * _putchar - Écrit un caractère dans stdout.
 * @c: Le caractère à afficher.
 *
 * Return: Le caractère écrit.
 */
int _putchar(char c);

int _isalpha(int c);

#endif /* MAIN_H */
