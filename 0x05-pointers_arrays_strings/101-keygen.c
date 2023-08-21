#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Program that generates random valid password
 * Return: 0 (Success)
 */
int main(void)
{
	char pass[84];
	int i = 0, sum = 0, x, y;

	srand(time(0));

	while (sum < 2772)

	{
		pass[i] = 33 + rand() % 94;
		sum += pass[i++];
	}
	pass[i] = '\0';

	if (sum != 2772)
	{
		x = (sum - 2772) / 2;
		y = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			x++;
		for (i = 0; pass[i]; i++)
		{
			if (pass[i] >= (33 + x))
			{
				pass[i] -= x;
				break;
			}
		}
		for (i = 0; pass[i]; i++)
		{
			if (pass[i] >= (33 + y))
			{
				pass[i] -= y;
				break;
			}
		}
	}
	printf("%s", pass);
	return (0);
}
