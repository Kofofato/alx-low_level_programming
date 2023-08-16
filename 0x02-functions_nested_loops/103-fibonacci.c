#include <stdio.h>
/**
 * main - Sequence is generated by adding previous two terms
 * Return: 0 (Success)
 */
int main(void)
{
	int a;
	unsigned long int b, c, after, sum;

	b = 1;
	c = 2;
	sum = 0;

	for (a = 1; a <= 33; ++a)
	{
		if (b <= 4000000 && (c % 2) == 0)
		{
			sum = sum + b;
		}
		after = a + c;
		b = c;
		c = after;
	}
	printf("%lu\n", sum);
	return (0);
}