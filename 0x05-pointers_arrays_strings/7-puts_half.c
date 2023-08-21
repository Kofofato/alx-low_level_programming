#include "main.h"
/**
 * puts_half - Function that prints half of a string
 * @str: Input string
 * Return: Length
 */
void puts_half(char *str)
{
	int longn = 0;

	while (*str != '\0')
	{
		longn++;
		str++;
	}
	_putchar('\n');
}
