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
	while (src[j] != '\0' && j < n)
	{
		dest[length] = src[j];
		j++;
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
