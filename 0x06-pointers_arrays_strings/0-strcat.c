#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 *
 * @dest: the destination of the concatenated string
 * @src: source string
 *
 * Return: the pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int length, j;

	length = 0;

	while (dest[length] != '\0')
	{
		++length;
	}
	for (j = 0; src[j] != '\0'; ++j, ++length)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
