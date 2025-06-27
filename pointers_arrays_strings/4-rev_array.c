#include "main.h"

/**
 * reverse_array - Inverse le contenu d’un tableau d'entiers
 * @a: le tableau à inverser
 * @n: le nombre d’éléments dans le tableau
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
