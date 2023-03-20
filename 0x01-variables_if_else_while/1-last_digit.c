#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Desciption: Program to assign a random value to n each time.
 *
 * Return: Always 0 (meaning success)
 */

int main(void)
{
	int n, lastDig;

	srand(time(0));
	n = rand() - RAND_MAX/2;
	/* your code should go there*/
	lastDig = n % 10;
	if (lastDig > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDig);
	else if (lastDig == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastDig);
	else if (lastDig < 6 && lastDig != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDig);
	return (0);
}
}