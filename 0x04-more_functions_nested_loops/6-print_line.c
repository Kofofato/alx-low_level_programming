#include "main.h"
/**
 * print_line - Function that draws a straight line
 * @n: Number of times
 * Return: 0 (Success)
 */

void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
