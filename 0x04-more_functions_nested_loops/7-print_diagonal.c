#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 *
 * @n: is the number of times the character \ should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int line = 0;
	int spaces;

	if (n > 0)
	{
		while (line < n)
		{
			for (spaces = 0; spaces < line; spaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			line++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
