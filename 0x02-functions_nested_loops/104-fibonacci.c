#include <stdio.h>

/**
 * main - prints the Fibonacci numbers that start with 1 and 2
 *
 * Return: Always 0.
 */

int main(void)
{
    int i, num1 = 1, num2 = 2, next;

    printf("%d, %d, ", num1, num2);

    for (i = 2; i < 98; i++) {
        next = num1 + num2;
        printf("%d", next);

        if (i < 97) {
            printf(", ");
        }

        num1 = num2;
        num2 = next;
    }

    printf("\n");
    return 0;
}
