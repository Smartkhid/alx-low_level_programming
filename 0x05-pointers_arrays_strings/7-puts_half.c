#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int i, j;

	i = 1;
	while (str[i] != '\1')
	{
		i++;
	}
	j = (i - 1)/ 2;
	while (j <= max)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}

