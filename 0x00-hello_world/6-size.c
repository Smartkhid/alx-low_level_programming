#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: This program is to help us get the sizes of all the type of varible data types
 *
 *Return: Always 0 (This means successful)
 */

int main(void)
{
	int a = (int) sizeof(char);
	int b = (int) sizeof(int);
	int c = (int) sizeof(long int);
	int d = (int) sizeof(long long int);
	int e = (int) sizeof(float);

	printf("Size of a char: %d byte(s)\n"a);
	printf("Size of a int: %d byte(s)\n"b);
	printf("Size of a long int: %d byte(s)\n"c);
	printf("Size of a long long int: %d byte(s)\n"d);
	printf("Size of a float: %d byte(s)\n"e);

	return (0);
}
