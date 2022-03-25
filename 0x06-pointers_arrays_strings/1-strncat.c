#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 *
 * @dest: destination of the new string
 * @src: the source of the string
 * @n: n bytes from src
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int length, j;

	length = 0;

	while (dest[length] != '\0')
	{
		++length;
	}
	for  (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[length] = src[j];
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
