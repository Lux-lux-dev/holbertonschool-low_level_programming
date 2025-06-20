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

int print_sign(int n);

int _abs(int);

int print_last_digit(int);

void jack_bauer(void);

void times_table(void);
#endif /* MAIN_H */
