#include "main.h"
/**
 * _isupper - Checks for uppercase characters
 * @c: character that should be checked
 * Return: 1 for uppercase and 0 for any other thing
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

