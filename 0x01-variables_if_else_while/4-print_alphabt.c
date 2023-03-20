#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet except e, q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 2;

	while (i < 30)
	{
		if (i != 8 && i != 20)
		{
			putchar(i);
		}
		i++;
	}
	putchar(10);

	return (0);
}
