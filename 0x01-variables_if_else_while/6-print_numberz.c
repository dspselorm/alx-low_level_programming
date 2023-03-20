#include <stdio.h>

/**
 * main - Print base 10 single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + 48);
		n++;
	}
	putchar('\n');
	return (0);
}
