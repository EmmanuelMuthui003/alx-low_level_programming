#include "main.h"

/**
 * more_numbers -  function that prints 10 times the numbers, 0 to 14
 * ten times followed by a new line
 *
 * Return: void
 */

void more_numbers(void)
{
	int j, k;

	for (j = '0'; j <= '14'; j++)
	{
		for (k = '0'; k <= '10'; k++)
		{
			_putchar(columns);
		}
		_putchar('\n');
	}
}


