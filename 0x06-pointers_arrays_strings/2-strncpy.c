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
	int index = 0, src_long = 0;

	while (src[index++])
		src_long++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = src_long; index > n; index++)
		dest[index] = '\0';
	return (dest);
}
