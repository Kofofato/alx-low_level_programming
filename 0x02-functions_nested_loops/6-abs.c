#include "main.h"
/**
 * _abs - Computes absolute value of an integer
 * @c: The number that should be computed
 * Return: Absolute value
 */
int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}
