#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet in lower then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b;

	a = 2;
	b = 4;

	while (a < 12)
	{
		putchar(a);
		a++;
	}

	while (b < 20)
	{
		putchar(b);
		b++;
	}

	putchar(10);

	return (0);
}
