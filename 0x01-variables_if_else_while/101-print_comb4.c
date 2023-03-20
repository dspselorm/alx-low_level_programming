#include <stdio.h>

/**
 * main - Print all possible combinations of three different digits,
 *        in ascending order, separated by a comma followed by a space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m, n, i;

	for (m = 0; m <= 7; m++)
	{
		for (n = m + 1; n <= 8; n++)
		{
			for (i = n + 1; i <= 9; i++)
			{
				putchar(m + '0');
				putchar(n + '0');
				putchar(i + '0');

				if (m == 7 && n == 8 && i == 9)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
