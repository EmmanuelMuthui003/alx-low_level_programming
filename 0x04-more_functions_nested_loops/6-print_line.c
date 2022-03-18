#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * followed by a new line.
 *
 * @n: number of times the character _ should be printed
 *
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
