#include "main.h"
int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Returns if a string is a palindrome
 * @s: String to be reversed
 * Return: 1 if it is palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - The length of the string
 * @s: Length of the string calculated
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - Recursive check for palindrome characters
 * @s: String checked
 * @i: iterator
 * @len: Length of the string
 * Return: 1 if palindrome and 0 if not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
