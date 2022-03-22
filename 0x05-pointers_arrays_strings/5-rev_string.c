#include "main.h"

/**
 * rev_string - a function that reverses a string
 *
 * @s: string
 *
 * Return: void
 */

void rev_string(char *s)
{
	char *t = s;

	{
		while (*t)
			t++;
		while (s < t--)
			_putchar(*t);
		_putchar('\n');
	}
}
