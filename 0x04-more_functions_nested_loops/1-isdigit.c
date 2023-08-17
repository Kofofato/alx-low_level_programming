#include "main.h"
/**
 * _isdigit - Check for digit from 0 through 9
 * @c: Chracter that should be checked
 * Return: 1 for digit and 0 for any other thing
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
