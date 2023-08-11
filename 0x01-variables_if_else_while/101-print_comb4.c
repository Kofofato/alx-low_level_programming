#include <stdio.h>
/**
 * main - Entry
 * Return: 0 (Success)
 */
int main(void)
{
	int ones = '0';
	int tens = '0';
	int hundreds = '0';

	while (hundreds <= '7')
	{
		while (tens <= '8')
		{
			while (ones <= '9')
			{
				if (hundreds < tens && tens < ones)
				{
					putchar(hundreds);
					putchar(tens);
					putchar(ones);
					if (!(ones == '9' && hundreds == '7' && tens == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
				ones++;
			}
			ones = '0';
			tens++;
		}
		tens = '0';
		hundreds++;
	}
putchar('\n');
return (0);
}

