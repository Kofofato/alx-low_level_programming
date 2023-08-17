#include "main.h"
/**
 * print_triangle - Prints triangle followed by a new line
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int row, corner, point;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (point = size - row; point >= 1; point--)
			{
				_putchar(' ');
			}
			for (corner = 1; corner <= row; corner++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
