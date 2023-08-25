#include "main.h"
/**
 * _strcmp - Function that compares two strings
 * @n: first string
 * @m: second string
 * Return: n[i] - m[i]
 */
int _strcmp(char *n, char *m)
{
	int i;

	i = 0;
	while (n[i] != '\0' && m[i] != '\0')
	{
		if (n[i] != m[i])
		{
			return (n[i] - m[i]);
		}
		i++;
	}
	return (0);
}
