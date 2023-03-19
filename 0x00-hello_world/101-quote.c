#include <stdio.h>

/**
 * main - Entry point
 *
 * Decription: prints Dora's quote
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
    const char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(2, msg, sizeof(msg)-1);
    return 1;
}
