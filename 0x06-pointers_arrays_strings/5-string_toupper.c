#include "main.h"
/**
 * string_toupper - Function changes lowercase to uppercase
 * @str: The string that will be changed
 * Return: The changed string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
