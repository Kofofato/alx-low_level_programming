#include "main.h"
/**
 * print_times_table - Prints the n times table starting with 0
 * @n: Number of the times table
 */

void print_times_table(int n)
{
	int a, b, c;

if (n >= 0 && n <= 15)
{
for (a = 0; a <= n, a++)
{
for (b = 0; b <= n, b++)
{
c = b * a;
if (c == 0)
{
_putchar(c + '0');
}
else if (c < 10 && b != 0)
{
	_putchar(',');
	_putchar
