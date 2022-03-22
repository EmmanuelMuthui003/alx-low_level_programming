#include "main.h"

/**
 * puts_half - function that prints half of a string
 *
 * @str: string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int len = 0,
	int j;

	while (str[i++])
		len++;

	if ((len % 2) == 0)
		j = len / 2;

	else
		j = (len / 2;

	for (i = j; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
