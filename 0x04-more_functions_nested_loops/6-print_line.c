#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 *
 * @n: number of times the character _ should be printed
 *
 * Return: void
 */

void print_line(int n)
{
	char ch = '_';

	if (n > 0)
		_putchar(ch);
	else
		_putchar('\n');
}
