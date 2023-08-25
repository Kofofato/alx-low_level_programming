#include "main.h"
/**
 * _strncat - Function that concentrates two strings
 * @dest: The string to which another is attached
 * @src: The string attached
 * @n: The number of bytes from src that will be attached to dest
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_long = 0;

	while (dest[index++])
		dest_long++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_long++] = src[index];
	return (dest);
}
