#include <stdio.h>

/**
 * main - Print all possible combinations of single
 * digit numbers
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
		putchar(44);
		putchar(32);
	}
	return (0);
}
