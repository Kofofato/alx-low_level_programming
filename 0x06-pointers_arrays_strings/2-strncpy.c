#include "main.h"
/**
 * _strncpy - Function that copies a string
 * @dest: To store the copied string
 * @src: The source string that will be copied
 * @n: The number of bytes to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
