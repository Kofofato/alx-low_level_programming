#include "main.h"
/**
 * *_strcpy - Function that copies the string pointed to by src
 * @dest: Type of string
 * @src: Type of string
 * Return: String
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;
	int m = 0;

	while (*(src + n) != '\0')
	{
		n++;
	}
	for ( ; m < n ; m++)
	{
		dest[m] = src[m];
	}
dest[n] = '\0';
return (dest);
}
