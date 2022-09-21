#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
    char s1[98] = "Hello ";
    char s2[] = "World!";
    char *ptr;

    ptr = _strcat(s1, s2);
    printf("%s", ptr);
    return (0);
}
