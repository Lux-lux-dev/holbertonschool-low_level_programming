#include "main.h"

/**
 * _atoi - Convertit une chaîne en entier.
 * @s: La chaîne à convertir.
 *
 * Return: L'entier converti, ou 0 si aucun chiffre trouvé.
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0, found_digit = 0;

	while (s[i])
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			; /* aucun effet */
		else if (s[i] >= '0' && s[i] <= '9')
		{
			int digit = s[i] - '0';

			found_digit = 1;

			if (result > __INT_MAX__ / 10 ||
					(result == __INT_MAX__ / 10 &&
					 digit > __INT_MAX__ % 10))
			{
				if (sign == 1)
					return (__INT_MAX__);
				else
					return (-__INT_MAX__ - 1);
			}
			result = result * 10 + digit;
		}
		else if (found_digit)
			break;
		i++;
	}

	return (result * sign);
}
