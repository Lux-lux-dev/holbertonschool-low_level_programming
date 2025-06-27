#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The converted integer, or 0 if no numbers are found
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0, started = 0, digit;

	while (s[i])
	{
		if (s[i] == '-' || s[i] == '+')
		{
			if (!started)
				sign *= (s[i] == '-') ? -1 : 1;
			else
				break;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			digit = s[i] - '0';

			if (result > __INT_MAX__ / 10 ||
					(result == __INT_MAX__ / 10 &&
					 digit > __INT_MAX__ % 10))
				return (sign == 1 ?
						__INT_MAX__ : -__INT_MAX__ - 1);

			result = result * 10 + digit;
		}
		else if (started)
			break;
		i++;
	}

	return (result * sign);
}
