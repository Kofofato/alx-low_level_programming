#include "main.h"
int actual_prime(int n, int i);

/**
 * is_prime_number - Returns 1 if the input integer is prime number
 * @n: The evaluated number
 * Return: 1 if n is prime number and 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - Recursive prime number calculation
 * @n: The evaluated number
 * @i: Iterator
 * Return: 1 if n is prime number and 0 if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
