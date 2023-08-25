#include "main.h"
/**
 * reverse_array - Function that reverses the contents of an array of integers
 * @a: Array of intergers that will be reversed
 * @n: Number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
