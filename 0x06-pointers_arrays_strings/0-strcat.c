#include "main.h"
/**
 * _strcat - Function that concentrates two strings
 * @dest: Value to be inputed
 * @src: Value to be inputed
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[1] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[1] != '\0')
	{
		dest[1] = src[1];
		a++;
		b++;
	}
	dest[1] = '\0';
	return (dest);
}
