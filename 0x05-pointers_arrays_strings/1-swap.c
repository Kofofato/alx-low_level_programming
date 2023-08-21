#include "main.h"
/**
 * swap_int - Function that swaps the value of two integers
 * @a: interger that will be swap
 * @b: interger that will be swap
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
