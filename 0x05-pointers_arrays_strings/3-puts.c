#include "main.h"
/**
 * _puts - Function that prints a string followed by a new line
 * @str: string that will be printed
 * Return: string and a new line
 */
void _puts(char *str)
{
	int n = 0;

	while (str[n])
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
