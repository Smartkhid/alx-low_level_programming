#include <stdio.h>
/**
 * This program is to help us get the sizes of all the type of varible data types
 *
 * Return: Always 0 (This means successful)
 *
 *
 */

int main(void)
{
	int a = sizeof(char);
	int b = sizeof(int);
	int c = sizeof(long int);
	int d = sizeof(long long int);
	int e = sizeof(float);

	printf("Size of a char: %d byte(s)\n"(int)a);
	printf("Size of a int: %d byte(s)\n"(int)b);
	printf("Size of a long int: %d byte(s)\n"(int)c);
	printf("Size of a long long int: %d byte(s)\n"(int)d);
	printf("Size of a float: %d byte(s)\n"(int)e);

	return (0);
}
