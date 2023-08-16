#include <stdio.h>

/**
 * main - List all te natural numbrs below 1024 that are multiples of 3 or 5
 * Return: 0 (Success)
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
