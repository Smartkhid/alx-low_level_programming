#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string to count
 * Return: length of the string
 */
int wildcmp(char* s1, char* s2) {
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return 0;  // strings are not identical
        }
        i++;
    }

    if (s1[i] == '\0' && s2[i] == '\0') {
        return 1;  // strings are identical
    }
    else {
        return 0;  // strings are not identical
    }
}
