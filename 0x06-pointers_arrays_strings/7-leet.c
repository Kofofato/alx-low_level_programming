#include "main.h"
/**
 * leet - Function that encodes a string into 1337
 * @n: String encoded
 * Return: Value of n
 */
char *leet(char *n)
{
	int c, d;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (c = 0; n[c] != '\0'; c++)
	{
		for (d = 0; d < 10; d++)
		{
			if (n[c] == s1[d])
			{
				n[c] = s2[d];
			}
		}
	}
	return (n);
}
