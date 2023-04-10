#include "main.h"

/**
 * main - prints Holberton
 *
 * Description: prints Holberton
 *
 * Return: 0 (Success)
 */

int _putchar(char c)
{
	char text[10] = "_putchar";
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}

