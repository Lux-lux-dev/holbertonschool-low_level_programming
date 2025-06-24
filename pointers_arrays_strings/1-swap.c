#include "main.h"
/**
 * void swap_int(int *a, int *b);
 *
 * echange a et b 
 *
 * return
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
