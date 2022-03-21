#include "main.h"
#include <string.h>

/**
 * _strlen - a function that returns the length of a string
 *
 * @s: the string to be measured by length
 *
 * Return: len
 */

int _strlen(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
