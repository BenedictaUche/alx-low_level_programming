<<<<<<< HEAD
#include "holberton.h"
/**
 * _strcat - concats two arrays
 *
 * @dest: destination of concat
 * @src: source array to concat
 *
 * Return: char value
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);
=======
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
>>>>>>> 383421c52cfd21c7ddea778a250a39ecc188a361
}
