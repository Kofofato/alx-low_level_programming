#include "main.h"
/**
 * _atoi - Function that convert a string to an integer
 * @s: The integer
 * Return: the integer converted
 */
int _atoi(char *s)
{
	int n, m, i, x, y, z;

	n = 0;
	m = 0;
	i = 0;
	x = 0;
	y = 0;
	z = 0;

	while (s[x] != '\0')
		x++;
	while (n < x && y == 0)
	{
		if (s[n] == '-')
			++m;

		if (s[n] >= '0' && s[n] <= '9')
		{
			z = s[n] - '0';
			if (m % 2)
				z = -z;
			i = i * 10 + z;
			y = 1;
			if (s[n + 1] < '0' || s[n + 1] > '9')
				break;
			y = 0;
		}
		n++;
	}
	if (y == 0)
		return (0);
	return (i);
}
