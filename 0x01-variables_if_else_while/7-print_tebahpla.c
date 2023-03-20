#include <stdio.h>

/**
 * main - Print alphabets backwards
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');

	return (0);
}
