#include <stdio.h>
/**
 * print_array - Function that prints n elements of an array of integers
 * @a: The array input
 * @n: The number of elements of the array that will be printed
 * Return: Input of a and n
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < (n - 1); c++)
	{
		printf("%d, ", a[c]);
	}
	if (c == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
