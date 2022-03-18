#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * followed by a new line.
 *
 * @n: number of times the character _ should be printed
 *
 * Return: Always 0
 */

void print_line(int n)
{
	int i = 0;

	if (i > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
